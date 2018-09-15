#ifndef PERMUTATION_H_INCLUDED
#define PERMUTATION_H_INCLUDED

#include <vector>
#include <set>

#endif // PERMUTATION_H_INCLUDED

using namespace std;

class Solution {
public:
    vector<string> Permutation(string str) {
        vector<string> results;
        set<string> results_tmp;
        if (str.size() == 0){
            return results;
        }

        int str_size = str.size();
        vector<bool> visited(str_size, false);
        string out;
        dfs(str, out, visited, str_size, results_tmp);
        for (string out : results_tmp){
            results.push_back(out);
        }

        return results;
    }

    void dfs(string str, string& out, vector<bool>& visited, int str_size, set<string>& results_tmp){
        if (out.size() == str_size){
            results_tmp.insert(out);
            return ;
        }
        for(int i = 0; i < str_size; i++){
            if (visited[i] == false){
                out.push_back(str[i]);
                visited[i] = true;

                dfs(str, out, visited, str_size, results_tmp);

                out.pop_back();
                visited[i] = false;
            }
        }
    }
};
