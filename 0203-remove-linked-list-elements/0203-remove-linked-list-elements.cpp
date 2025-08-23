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
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=NULL && head->val == val){
            ListNode* temp=head;
            head=head->next;
            delete temp;
        }
        //ListNode* newhead = head;
        ListNode* temp=head;
        ListNode* prevtemp=head;
        while(temp!=NULL){
            if(temp->val != val){
                prevtemp = temp;
                temp=temp->next;
            }else{
                prevtemp->next=temp->next;
                ListNode* del = temp;
                temp = temp->next; 
                delete del;
            }
        }
        return head;
    }
};