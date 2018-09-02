#ifndef STACK2QUEUE_H_INCLUDED
#define STACK2QUEUE_H_INCLUDED



#endif // STACK2QUEUE_H_INCLUDED

class Solution
{
public:
    void push(int node) {
        stack1.push(node);
    }

    int pop() {
        if (stack2.empty()){
            while(!stack1.empty()){
                stack2.push(stack1.top());
                stack1.pop();
            }
        }

        int ret_value = stack2.top();
        stack2.pop();
        return ret_value;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};
