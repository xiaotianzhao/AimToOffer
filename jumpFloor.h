#ifndef JUMPFLOOR_H_INCLUDED
#define JUMPFLOOR_H_INCLUDED



#endif // JUMPFLOOR_H_INCLUDED

class Solution {
public:
    int jumpFloor(int number) {
        if (number == 0 || number == 1){
            return 1;
        }

        int num_1 = 1, num_2 = 1;
        for (int i = 2; i <= number; i++){
            int tmp = num_2;
            num_2 += num_1;
            num_1 = tmp;
        }

        return num_2;
    }
};
