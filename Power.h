#ifndef POWER_H_INCLUDED
#define POWER_H_INCLUDED

#include <cmath>

#endif // POWER_H_INCLUDED

class Solution {
public:
    double Power(double base, int exponent) {
        if (exponent == 0){
            return 1;
        }

        bool flag = exponent > 0 ? true:false;

        exponent = abs(exponent);

        if ((exponent & 1) == 1){
            if (flag){
                return Power(base, exponent >> 1) * base * Power(base, exponent >> 1);
            }else{
                return 1.0 / (Power(base, exponent >> 1) * base * Power(base, exponent >> 1));
            }
        }else{
            if (flag){
                return Power(base, exponent >> 1) * Power(base, exponent >> 1);
            }else{
                return 1.0 / (Power(base, exponent >> 1) * Power(base, exponent >> 1));
            }
        }

    }
};
