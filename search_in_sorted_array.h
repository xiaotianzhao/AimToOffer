#ifndef FIND_H_INCLUDED
#define FIND_H_INCLUDED

#include <vector>

#endif // FIND_H_INCLUDED

using namespace std;

class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        if (array.size() == 0 || array[0].size() == 0){
            return false;
        }

        int m = array.size(), n = array[0].size();

        int pos_x, pos_y;
        pos_x = 0;
        pos_y = n - 1;

        while(pos_x < m && pos_y >= 0){
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
