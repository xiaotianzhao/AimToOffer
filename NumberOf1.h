#ifndef NUMBEROF1_H_INCLUDED
#define NUMBEROF1_H_INCLUDED



#endif // NUMBEROF1_H_INCLUDED

class Solution {
public:
     int  NumberOf1(int n) {
        int cnt = 0;
        for (int i = 0; i < 32; i++){
            if (n & (1 << i)){
                cnt++;
            }
        }
        return cnt;
     }
};
