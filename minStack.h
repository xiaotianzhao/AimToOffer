#ifndef MIN_STACK_H_INCLUDED
#define MIN_STACK_H_INCLUDED

#include <stack>

#endif // MIN_STACK_H_INCLUDED

using namespace std;

class Solution {
public:
    void push(int value) {
        data_stack.push(value);
        if (min_stack.empty()){
            min_stack.push(value);
        }else{
            int min_value = value;
            if (min_stack.top() < value){
                min_value = min_stack.top();
            }
            min_stack.push(min_value);
        }
    }
    void pop() {
        data_stack.pop();
        min_stack.pop();
    }
    int top() {
        return data_stack.top();
    }
    int min() {
        return min_stack.top();
    }
private:
    stack<int> data_stack;
    stack<int> min_stack;
};
