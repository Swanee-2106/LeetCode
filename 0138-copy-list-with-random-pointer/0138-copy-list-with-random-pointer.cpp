/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL){
            return NULL;
        }
        unordered_map<Node*,Node*> m;
        Node* newhead = new Node(head->val);
        Node* temp =head->next;
        Node* newtemp= newhead;
        m[head]= newhead;
        while(temp!=NULL){
            Node* newnode= new Node(temp->val);
            m[temp]=newnode;
            newtemp->next=newnode;
            newtemp=newtemp->next;
            temp=temp->next;
        }
        temp=head;
        newtemp=newhead;
        while(temp!=NULL){
            if(temp->random==NULL){
                newtemp->random=NULL;
            }
            newtemp->random=m[temp->random];
            temp=temp->next;
            newtemp=newtemp->next;
        }
        return newhead;;
    }
};