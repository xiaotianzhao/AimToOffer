#ifndef PRINTMATRIX_H_INCLUDED
#define PRINTMATRIX_H_INCLUDED

#include <vector>

#endif // PRINTMATRIX_H_INCLUDED

using namespace std;

class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
        vector<int> results;
        if (matrix.size() == 0 && matrix[0].size() == 0){
            return results;
        }

        int m = matrix.size(), n = matrix[0].size();
        int limits = min((n - 1) / 2, (m - 1) / 2);

        for(int i = 0 ; i <= limits; i++){
            int pos_x = i, pos_y = i;
            if (i == m - 1 - i){
                for(int j = i; j < n - i; j++){
                    results.push_back(matrix[pos_x][j]);
                }
            }else if (i == n - 1 - i){
                for(int j = i; j < m - i; j++){
                    results.push_back(matrix[j][pos_y]);
                }
            }else{
                while(pos_y < n - i - 1){
                    results.push_back(matrix[pos_x][pos_y++]);
                }

                while(pos_x < m - i -1){
                    results.push_back(matrix[pos_x++][pos_y]);
                }

                while(pos_y > i){
                    results.push_back(matrix[pos_x][pos_y--]);
                }

                while(pos_x > i){
                    results.push_back(matrix[pos_x--][pos_y]);
                }
            }
        }

        return results;
    }
};
