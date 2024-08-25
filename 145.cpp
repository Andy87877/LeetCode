// https://leetcode.com/problems/binary-tree-postorder-traversal/description/
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
    vector<int> postorderTraversal(TreeNode* root) {
        if (root == nullptr) return {};

        vector<int> vec, ans;
        vector<TreeNode*> vec_head;
        TreeNode* head = root;
        vec_head.push_back(head);

        while (vec_head.size() != 0){
            head = vec_head.back();
            vec.push_back(head->val);
            vec_head.pop_back();

            if (head->left != nullptr){
                vec_head.push_back(head->left);
            }

            if (head->right != nullptr) {
                vec_head.push_back(head->right);
            } 
        }

        for (int i = vec.size()-1; i >= 0; i--){
            ans.push_back(vec[i]);
        }

        return ans;
    }
};
