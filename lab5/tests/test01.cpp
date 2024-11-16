#include <gtest/gtest.h>
#include "../include/DynamicArray.h"
#include "../include/MemoryResource.h"
#include <memory>
#include <string>

TEST(DynamicArrayTest, TestIntArray) {
    MemoryResource memoryResource(64, 20);
    DynamicArray<int> arr(&memoryResource);

    EXPECT_EQ(arr.size(), 0);

    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);

    EXPECT_EQ(arr.size(), 3);
    EXPECT_EQ(arr[0], 10);
    EXPECT_EQ(arr[1], 20);
    EXPECT_EQ(arr[2], 30);

    arr.pop_back();
    EXPECT_EQ(arr.size(), 2);
    EXPECT_EQ(arr[1], 20);
}

struct ComplexType {
    int id;
    std::string name;

    bool operator==(const ComplexType& other) const {
        return id == other.id && name == other.name;
    }

    friend std::ostream& operator<<(std::ostream& os, const ComplexType& obj) {
        return os << "{id: " << obj.id << ", name: " << obj.name << "}";
    }
};