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
    ListNode* split(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next !=NULL){
            fast=fast->next->next;
            if(fast!=NULL){
                slow= slow->next;
            }
        }
        ListNode* temp=slow->next;
        slow->next= NULL;
        return temp;
    }
    ListNode* merge(ListNode* first, ListNode* second){
        if(first==NULL){return second;}
        if(second== NULL){return first;}
        if(first->val<second->val){
            first->next = merge(first->next,second);
            return first;
        }else{
            second->next=merge(first,second->next);
            return second;
        }
        return NULL;
    }

    ListNode* mergeSort(ListNode* head){
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* second= split(head);
        head= mergeSort(head);
        second= mergeSort(second);

        return merge(head,second);
    }
    ListNode* sortList(ListNode* head) {
        return mergeSort(head);
    }
};