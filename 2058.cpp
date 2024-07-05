// https://leetcode.com/problems/find-the-minimum-and-maximum-number-of-nodes-between-critical-points/description/
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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int minDistance = 9999999999, maxDistance = -1, Distance = 0, tmp = 9999999999;
        int haha = 0;
        ListNode* front = head;
        ListNode* mid = head;
        ListNode* back = head;
        mid = mid -> next;
        back = back -> next;
        if (back -> next == nullptr) return {-1,-1};
        back = back -> next;

        bool check = false;
        while (mid->next != nullptr){
           
            bool flag = false;
            if (front->val > mid->val && back->val > mid->val){
               flag = true;
            } 
            if (front->val < mid->val && back->val < mid->val){
               flag = true;
            }

            if (flag){
                haha++;
                cout << mid->val << " ";

                minDistance = min(minDistance, tmp);

                if (check){
                    maxDistance = Distance;
                } else {
                    Distance = 0;
                    check = true;
                }
                
                tmp = 0;
            }
            if (check){
                Distance++;
                tmp++;
            }
            

            front = front -> next;
            mid = mid -> next;
            back = back -> next;
        }

        if (haha <= 1) return {-1,-1};
        return {minDistance, maxDistance};
    }
};