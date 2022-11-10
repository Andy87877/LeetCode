// https://leetcode.com/problems/n-ary-tree-preorder-traversal/

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void solve(Node* curr, vector<int> &ans) {
        if (curr == NULL){
            return;
        }
        
        ans.push_back(curr->val);
        for (auto i: curr->children){
            solve(i, ans);
        }
    }
    
    vector<int> preorder(Node* root) {
        vector<int> ans;
        solve(root, ans);
        return ans;
    }
};