#ifndef SEARCH_IN_SORTED_ARRAY_H_INCLUDED
#define SEARCH_IN_SORTED_ARRAY_H_INCLUDED

#include <vector>

#endif // SEARCH_IN_SORTED_ARRAY_H_INCLUDED

using namespace std;

class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        int height = array.size();
        if (height ==0){
            return false;
        }
        int width = array[0].size();
        if (width == 0){
            return false;
        }

        int pos_x = 0;
        int pos_y = width - 1;

        while(pos_x < height && pos_y >= 0){
            if (target == array[pos_x][pos_y]){
                return true;
            }else if (target < array[pos_x][pos_y]){
                pos_y--;
            }else{
                pos_x++;
            }
        }

        return false;
    }
};
