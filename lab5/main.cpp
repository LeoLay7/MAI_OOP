#include <iostream>
#include <memory>
#include "include/MemoryResource.h"
#include "include/DynamicArray.h"

struct ComplexType {
    int id;
    std::string name;

    friend std::ostream& operator<<(std::ostream& os, const ComplexType& obj) {
        return os << "{id: " << obj.id << ", name: " << obj.name << "}";
    }
};

int main() {
    std::cout << "Testing DynamicArray with int:\n";
    MemoryResource memoryResource(1024 * 8, 20);
    DynamicArray<int> intArray(&memoryResource);

    for (int i = 1; i <= 5; ++i) {
        intArray.push_back(i);
    }

    for (auto it = intArray.begin(); it != intArray.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n\n";

    std::cout << "Testing DynamicArray with ComplexType:\n";
    DynamicArray<ComplexType> complexArray(&memoryResource);

    complexArray.push_back({1, "Alice"});
    complexArray.push_back({2, "Bob"});
    complexArray.push_back({3, "Charlie"});

    for (auto it = complexArray.begin(); it != complexArray.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n";

    return 0;
}