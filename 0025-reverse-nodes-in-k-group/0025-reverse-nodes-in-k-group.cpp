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
    ListNode* reverseKGroup(ListNode* head, int k) {
        int count=0;
        ListNode* temp = head;
        while(count<k){
            if(temp==NULL){
                return head;
            }
            temp= temp->next;
            count++;
        }
        ListNode* newN = reverseKGroup(temp,k);
        temp=head;
        count=0;
        while(count<k){
            ListNode* nextptr= temp->next;
            temp->next= newN;
            newN= temp;
            temp=nextptr;
            count++;
        }
        return newN;
    }
};