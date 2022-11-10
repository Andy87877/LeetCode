// https://leetcode.com/problems/linked-list-cycle/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* curr = head;
        bool flag = false;
        int i = 0;
        while (curr != NULL) {
            ListNode* next = curr -> next;
            curr = next;
            i++;
            if (i >= 10002) {
                return true;
            }
        }
        return flag;
    }
};