// https://leetcode.com/problems/middle-of-the-linked-list/
/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Middle of the Linked List.
Memory Usage: 7.2 MB, less than 22.04% of C++ online submissions for Middle of the Linked List.

*/
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
/*
這一題我用暴力法
首先先算有多少次數
再來找到中間的值
*/
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        // 算次數
        int times = 0;
        ListNode* Node = head;
        
        while(Node != NULL){
            times++;
            Node = Node -> next;
        }
        
        // 解答案
        times /= 2;
        ListNode* ans = head;
        while(times--) {
            ans = ans -> next; 
        }
        return ans;
    }
};