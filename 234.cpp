// https://leetcode.com/problems/palindrome-linked-list/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> vec;
        ListNode* Node = head;
        while(Node != NULL){
            int num = Node->val;
            // cout << num << "\n";
            vec.push_back(num);
            Node = Node->next;
        }

        for (int i = 0; i < vec.size()/2; i++){
            // cout << vec[i] << " ";
            if (vec[i] != vec[vec.size()-i-1]) return false;
        }
        return true;
    }
};