#ifndef RECONSTRUCTBINARYTREE_H_INCLUDED
#define RECONSTRUCTBINARYTREE_H_INCLUDED

#include <vector>

#endif // RECONSTRUCTBINARYTREE_H_INCLUDED

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        if (pre.size() == vin.size() && pre.size() == 0){
            return NULL;
        }

        int root_value = pre[0];
        TreeNode* root = new TreeNode(root_value);

        int left_length = 0;
        for (int i = 0; i < vin.size(); i++){
            if (root_value == vin[i]){
                break;
            }else{
                left_length++;
            }
        }

        vector<int> left_pre = vector<int>(pre.begin() + 1, pre.begin() + 1 + left_length);
        vector<int> left_vin = vector<int>(vin.begin() , vin.begin() + left_length);
        vector<int> right_pre = vector<int>(pre.begin() + 1 + left_length, pre.end());
        vector<int> right_vin = vector<int>(vin.begin() + left_length + 1, vin.end());

        TreeNode* left_node = reConstructBinaryTree(left_pre, left_vin);
        TreeNode* right_node = reConstructBinaryTree(right_pre, right_vin);

        root->left = left_node;
        root->right = right_node;

        return root;
    }
};
