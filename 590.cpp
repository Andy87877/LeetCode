// https://leetcode.com/problems/n-ary-tree-postorder-traversal/description/
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
    vector<int> postorder(Node* root) {
        if (root == nullptr) return {};
        vector<int> ans; // answer
        vector<Node*> vec; // order
        
        Node* head = root;
        vec.push_back(head);
        
        while (vec.size() != 0){
            head = vec[vec.size()-1];
            vec.pop_back();       
            ans.push_back(head->val);

            vector<Node*> vec_children = head->children;
            for (int i = 0; i < vec_children.size(); i++){
                vec.push_back(vec_children[i]);
            }
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
