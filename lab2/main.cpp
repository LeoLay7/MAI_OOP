#include <iostream>
#include "include/Decimal.hpp"

int main() {
    std::cout << "start" << std::endl;
    Decimal var1 = Decimal();
    Decimal var2 = Decimal("100");
    Decimal var3 = Decimal{'2', '0', '0'};
    Decimal tmp = Decimal("300");
    Decimal var4 = tmp;

    std::cout << "all created" << std::endl;
    var2.print(std::cout) << std::endl;
    var3.print(std::cout) << std::endl;
    var4.print(std::cout) << std::endl;
    var1.print(std::cout) << std::endl;

    var3 -= var2;
    var4 += var2;

    var3.print(std::cout) << std::endl;
    var4.print(std::cout) << std::endl;

    std::cout << (var3 < var4) << (var4 > var3) << std::endl;
    std::cout << (var3 > var4) << (var4 < var3) << std::endl;
    std::cout << (var2 == var3) << (var2 != var3) << std::endl;


    Decimal var01 = Decimal("0020");
    Decimal var02 = Decimal("20");
    std::cout << (var01 == var02) << std::endl;

    Decimal var11 = Decimal{'0', '0', '2', '0'};
    Decimal var12 = Decimal{'2', '0'};
    std::cout << (var01 == var02) << std::endl;

    try {
        Decimal var5 = Decimal("a");
    } catch (std::invalid_argument e) {
        std::cout << "All work" << std::endl;
    }

    try {
        Decimal var6 = Decimal(5, 'a');
    } catch (std::invalid_argument e) {
        std::cout << "All work" << std::endl;
    }

    try {
        Decimal var5 = Decimal{'a', 'a'};
    } catch (std::invalid_argument e) {
        std::cout << "All work" << std::endl;
    }

    return 0;
}