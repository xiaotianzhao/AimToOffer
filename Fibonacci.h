#ifndef FIBONACCI_H_INCLUDED
#define FIBONACCI_H_INCLUDED



#endif // FIBONACCI_H_INCLUDED

class Solution {
public:
    int Fibonacci(int n) {
        if (n == 0){
            return 0;
        }

        if (n == 1 || n == 2){
            return 1;
        }

        int num_1 = 1;
        int num_2 = 1;
        for (int i = 3; i <= n ; i++){
            int tmp = num_2;
            num_2 = num_2 + num_1;
            num_1 = tmp;
        }

        return num_2;
    }
};
