/*
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    void removeLoop(Node* head) {
        // code here
        Node *slow=head;
        Node *fast=head;
        bool iscycle=false;
        
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow){
                iscycle=true;
                break;
            }
        }
        
        if(!iscycle){
            return;
        }
        
        slow=head;
        
        if (slow == fast) { // 🔥 EDGE CASE
            while (fast->next != slow) {
                fast = fast->next;
            }
            fast->next = NULL;
            return;
        }
        
        Node *pre=NULL;
        while(slow!=fast){
            slow=slow->next;
            pre=fast;
            fast=fast->next;
        }
        pre->next=NULL;
        
    }
};
