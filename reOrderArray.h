#ifndef REORDERARRAY_H_INCLUDED
#define REORDERARRAY_H_INCLUDED

#include <vector>

#endif // REORDERARRAY_H_INCLUDED

using namespace std;

class Solution {
public:
    void reOrderArray(vector<int> &array) {
        int array_size = array.size();
        vector<int> odds, evens;

        for (int i = 0; i < array_size; i++){
            if ((array[i] & 1) == 1){
                odds.push_back(array[i]);
            }else{
                evens.push_back(array[i]);
            }
        }

        for(int i = 0; i < odds.size(); i++){
            array[i] = odds[i];
        }

        for(int i = odds.size(); i < odds.size() + evens.size(); i++){
            array[i] = evens[i - odds.size()];
        }
    }
};
