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
    ListNode* oddEvenList(ListNode* head) {
       /* if (!head || !head->next) return head;
        ListNode* tail=head;
        while(tail->next != NULL){
            tail= tail->next;
        }
        ListNode* curr = head;
        
        ListNode* end= tail;
        while(curr != end && curr->next!=NULL){
            ListNode* evenN = curr->next;
            curr->next= evenN->next;

            if (curr->next != nullptr) {
                curr = curr->next;          // next odd par move
            }
            tail->next=evenN;
            evenN->next=NULL;
            tail=evenN;
        }
        return head;*/

        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* odd= head;
        ListNode* even = head->next;
        ListNode* evenHead= even;

        while(even!=NULL && even->next !=NULL){
            odd->next=even->next;
            odd=even->next;

            even->next= odd->next;
            even= odd->next;
        }
        odd->next=evenHead;
        return head;
    }
};