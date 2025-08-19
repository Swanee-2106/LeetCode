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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int sz=0;
        while(temp != NULL){
            sz++;
            temp = temp->next;
        }
        int mid = sz/2 +1;
        temp= head;
        for(int i=1;i<mid;i++){
            temp=temp->next;
        }
        return temp;
    }
};