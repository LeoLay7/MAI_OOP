#include "../include/countUnits.h"

int countUnits(int a, int b) {
    int result = 0;
    if (b < a) return result;
    for (int i = a; i <= b; i++) {
        int units = 0;
        int num = i;
        while (num > 0) {
            if (num & 1 == 1) units++;
            num /= 2;
        }
        result += units;
    }
    return result;
}