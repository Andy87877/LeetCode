// https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/description/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    TreeNode* bstToGst(TreeNode* root) {
        int sum = 0;
        TreeNode* node = root;

        while (root != nullptr){
            if (root->right == nullptr){ //右下沒有人
                sum += root->val;
                root->val = sum;
                root = root->left; //往左下
            } else { //右下有人
                TreeNode* next_node = root->right; //往右下

                // 到最左下 or 
                while (next_node->left != nullptr && next_node->left != root) {
                    next_node = next_node->left;
                }

                if (next_node->left == nullptr) { //左下是空的
                    next_node->left = root;
                    root = root->right; //到右下
                } else {
                    sum += root->val;
                    root->val = sum; 
                  
                    next_node->left = nullptr;
                    root = root->left;
                }
            }
        }

        return node;
    }
};