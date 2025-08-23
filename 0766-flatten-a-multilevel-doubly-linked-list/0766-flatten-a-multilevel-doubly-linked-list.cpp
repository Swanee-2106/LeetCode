/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        if(head==NULL){
            return head;
        }
        Node* curr = head;
        while(curr != NULL){
            if(curr->child != NULL){
                //flatten the child
                Node* nextptr = curr->next;
                curr->next = flatten(curr->child);
                curr->next->prev=curr;
                curr->child= NULL;
                //find tail
                while(curr->next != NULL){
                    curr= curr->next;
                }
                //attach tail with nextptr
                if(nextptr != NULL){
                    curr->next=nextptr;
                    nextptr->prev=curr;
                }
            }
            curr = curr->next;
        }
        return head;
    }
};