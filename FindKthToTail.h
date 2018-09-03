#ifndef FINDKTHTOTAIL_H_INCLUDED
#define FINDKTHTOTAIL_H_INCLUDED



#endif // FINDKTHTOTAIL_H_INCLUDED

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};

class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        ListNode* p_head = pListHead;
        for (int i = 0; i < k; i++){
            if (p_head != NULL){
                p_head = p_head->next;
            }else{
                return NULL;
            }
        }

        ListNode* p_result = pListHead;
        while(p_head!=NULL){
            p_head = p_head->next;
            p_result = p_result->next;
        }

        return p_result;
    }
};
