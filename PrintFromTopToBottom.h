#ifndef PRINTFROMTOPTOBOTTOM_H_INCLUDED
#define PRINTFROMTOPTOBOTTOM_H_INCLUDED

#include<vector>
#include<queue>

#endif // PRINTFROMTOPTOBOTTOM_H_INCLUDED

using namespace std;

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
    vector<int> PrintFromTopToBottom(TreeNode* root) {
        vector<int> results;
        queue<TreeNode*> queue1, queue2;

        if(root != NULL){
            queue1.push(root);
        }

        while(!(queue1.empty() && queue2.empty())){
            while(!queue1.empty()){
                TreeNode* node = queue1.front();
                results.push_back(node->val);
                if (node->left != NULL){
                    queue2.push(node->left);
                }
                if (node->right != NULL){
                    queue2.push(node->right);
                }
                queue1.pop();
            }

            while(!queue2.empty()){
                TreeNode* node = queue2.front();
                results.push_back(node->val);
                if(node->left != NULL){
                    queue1.push(node->left);
                }
                if(node->right != NULL){
                    queue1.push(node->right);
                }
                queue2.pop();
            }
        }

        return results;
    }
};
