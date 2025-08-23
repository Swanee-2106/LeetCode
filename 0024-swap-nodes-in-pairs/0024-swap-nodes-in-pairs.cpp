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
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp = head;
        int count=0;
        while(count<2){
            if(temp==NULL){
                return head;
            }
            temp = temp->next;
            count++;
        }
        ListNode* newN= swapPairs(temp);

        temp=head;
        count=0;
        while(count<2){
            ListNode* nextptr = temp->next;
            temp->next=newN;
            newN=temp;
            temp=nextptr;
            count++;
        }
        return newN;
    }
};