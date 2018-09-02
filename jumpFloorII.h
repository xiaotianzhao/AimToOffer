#ifndef JUMPFLOORII_H_INCLUDED
#define JUMPFLOORII_H_INCLUDED

#include <vector>

#endif // JUMPFLOORII_H_INCLUDED

using namespace std;

class Solution {
public:
    int jumpFloorII(int number) {
        if (number == 0 || number == 1){
            return 1;
        }

        vector<int> steps = vector<int>(number + 1);
        steps[0] = 1;
        steps[1] = 1;

        for(int i = 2; i < number; j++){
            int sum = 0;
            for (int j = 0; j < i ; j++){
                sum += steps[j];
            }
            steps[i] = sum;
        }

        return steps[number];
    }
};
