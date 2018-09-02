#ifndef PRINTLISTFROMTAILTOHEAD_H_INCLUDED
#define PRINTLISTFROMTAILTOHEAD_H_INCLUDED

#include <vector>
#include <stack>

#endif // PRINTLISTFROMTAILTOHEAD_H_INCLUDED

using namespace std;

struct ListNode {
      int val;
      struct ListNode *next;
      ListNode(int x) :
            val(x), next(NULL) {
      }
};

class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> num_array;
        stack<int> num_stack;

        ListNode* pointer = head;
        while(pointer != NULL){
            num_stack.push(pointer->val);
            pointer = pointer->next;
        }

        while(!num_stack.empty()){
            num_array.push_back(num_stack.top());
            num_stack.pop();
        }

        return num_array;
    }
};
