#include <iostream>
#include "include/countUnits.h"


int main() {
    int a, b;
    while (true) {
        std::cout << "First number: ";
        if (!(std::cin >> a)) {
            std::cin.clear();
            std::cin.ignore();
            std::cout << "Wrong input" << std::endl << std::endl;
            continue;
        }
        std::cout << "Second number: ";
        if (!(std::cin >> b)) {
            std::cin.clear();
            std::cin.ignore();
            std::cout << "Wrong input" << std::endl << std::endl;
            continue;
        }
        if (a > b) std::cout << "First number should be greater or equal 0 and greater or equal second number" << std::endl << std::endl;
        else break;
    }
    
    std::cout << "Total ones in all numbers: " << countUnits(a, b) << std::endl;

    return 0;
}