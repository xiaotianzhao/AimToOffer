#ifndef CLONE_H_INCLUDED
#define CLONE_H_INCLUDED



#endif // CLONE_H_INCLUDED

struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};

class Solution {
public:
    RandomListNode* Clone(RandomListNode* pHead)
    {
        if (pHead == NULL){
            return NULL;
        }

        //copy
        RandomListNode* p_node = pHead;
        while(p_node != NULL){
            RandomListNode* new_node = new RandomListNode(p_node->label);
            new_node->next = p_node->next;
            p_node->next = new_node;
            p_node = new_node->next;
        }

        //link
        p_node = pHead;
        while(p_node != NULL){
            if (p_node->random != NULL){
                p_node->next->random = p_node->random->next;
            }
            p_node = p_node->next->next;
        }

        //split nodes
        p_node = pHead;
        RandomListNode* p_clone_node = NULL;
        RandomListNode* dummy = NULL;
        while(p_node != NULL){
            if(dummy == NULL){
                dummy = p_node->next;
                p_clone_node = dummy;
            }else{
                p_clone_node->next = p_node->next;
                p_clone_node = p_clone_node->next;
            }

            p_node->next = p_node->next->next;
            p_node = p_node->next;
        }

        return dummy;
    }
};
