#ifndef ISPOPORDER_H_INCLUDED
#define ISPOPORDER_H_INCLUDED

#include<vector>
#include<stack>

#endif // ISPOPORDER_H_INCLUDED

using namespace std;

class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        int j = 0;
        stack<int> help_stack;
        int push_len = pushV.size();

        for (int i = 0 ; i < popV.size(); i++){
            int target_value = popV[i];
            if (!help_stack.empty() && target_value == help_stack.top()){
                help_stack.pop();
            }else{
                while(j < push_len && pushV[j] != target_value){
                    help_stack.push(pushV[j++]);
                }

                if (j < push_len){
                    help_stack.push(target_value);
                    help_stack.pop();
                    j++;
                }else{
                    return false;
                }
            }
        }

        if(help_stack.empty()){
            return true;
        }else{
            return false;
        }
    }
};
