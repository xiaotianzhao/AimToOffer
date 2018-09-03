#ifndef MERGE_H_INCLUDED
#define MERGE_H_INCLUDED



#endif // MERGE_H_INCLUDED

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};

class Solution {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
        ListNode* p_node1 = pHead1;
        ListNode* p_node2 = pHead2;
        ListNode* p_dummy = new ListNode(-1);
        ListNode* p_current = p_dummy;

        while(p_node1 != NULL && p_node2 != NULL){
            if (p_node1->val < p_node2->val){
                p_current->next = p_node1;
                p_node1 = p_node1->next;
            }else{
                p_current->next = p_node2;
                p_node2 = p_node2->next;
            }

            p_current = p_current->next;
        }

        if (p_node1 != NULL){
            p_current->next = p_node1;
        }

        if (p_node2 != NULL){
            p_current->next = p_node2;
        }

        return p_dummy->next;

    }
};
