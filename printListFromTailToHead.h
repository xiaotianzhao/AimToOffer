class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> numArray;
		stack<int> numStack;

		ListNode* pointer = head;

		while (pointer != NULL){
			numStack.push(pointer->val);
			pointer = pointer->next;
		}

		while (!numStack.empty()){
			numArray.push_back(numStack.top());
			numStack.pop();
		}
		return numArray;
    }
};
