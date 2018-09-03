#ifndef HASSUBTREE_H_INCLUDED
#define HASSUBTREE_H_INCLUDED


#endif // HASSUBTREE_H_INCLUDED

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};

class Solution {
public:
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        bool result = false;
        if (pRoot1 != NULL && pRoot2 != NULL){
            if (pRoot1->val == pRoot2->val){
                result = isSubTree(pRoot1, pRoot2);
            }

            if (!result){
                result = HasSubtree(pRoot1->left, pRoot2);
            }

            if (!result){
                result = HasSubtree(pRoot1->right, pRoot2);
            }
        }

        return result;
    }

    bool isSubTree(TreeNode* pRoot1, TreeNode* pRoot2){
        if (pRoot2 == NULL){
            return true;
        }

        if (pRoot1 == NULL){
            return false;
        }

        if (pRoot1->val == pRoot2->val){
            return isSubTree(pRoot1->left, pRoot2->left) && isSubTree(pRoot1->right, pRoot2->right);
        }else{
            return false;
        }
    }
};
