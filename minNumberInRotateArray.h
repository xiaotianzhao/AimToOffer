#ifndef MINNUMBERINROTATEARRAY_H_INCLUDED
#define MINNUMBERINROTATEARRAY_H_INCLUDED

#include <vector>
#include <climits>

#endif // MINNUMBERINROTATEARRAY_H_INCLUDED

using namespace std;

class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        int array_size = rotateArray.size();

        if (array_size == 0){
            return 0;
        }
        if (array_size == 1){
            return rotateArray[0];
        }

        int low = 0;
        int high = array_size - 1;

        while(low < high - 1){
            int mid = (low + high) / 2;
            if (rotateArray[low] == rotateArray[mid]){
                int min_num = INT_MAX;
                for (int i = low; i <= high; i++){
                    if (min_num > rotateArray[i]){
                        min_num = rotateArray[i];
                    }
                }
                return min_num;
            }else if (rotateArray[low] < rotateArray[mid]){
                low = mid;
            }else{
                high = mid;
            }
        }

        return rotateArray[high];
    }
};
