#ifndef FINDPATH_H_INCLUDED
#define FINDPATH_H_INCLUDED

#include <vector>

#endif // FINDPATH_H_INCLUDED

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
    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
        vector<vector<int>> results;
        if (root == NULL){
            return results;
        }

        vector<int> path;
        int current_sum = 0;
        FindPath(root, expectNumber, results, path, current_sum);
        return results;
    }

    void FindPath(TreeNode* root, int expectNumber, vector<vector<int>>& results, vector<int>& path, int& current_sum){
        current_sum += root->val;
        path.push_back(root->val);

        if (current_sum == expectNumber){
            if (root->left == NULL && root->right == NULL){
                results.push_back(path);
            }else{
                current_sum -= root->val;
                path.pop_back();
                return ;
            }
        }else{
            if (root->left != NULL){
                FindPath(root->left, expectNumber, results, path, current_sum);
            }

            if (root->right != NULL){
                FindPath(root->right, expectNumber, results, path, current_sum);
            }
        }

        current_sum -= root->val;
        path.pop_back();
    }
};
