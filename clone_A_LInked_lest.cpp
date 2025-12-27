
// class Solution {
//   public:
//     Node* cloneLinkedList(Node* head) {
        
//         if(head == NULL) return NULL;
        
//         unordered_map<Node*,Node*>m;
        
//         Node *oldtemp = head;
//         Node *newhead = new Node(head->data);
//         Node *newtemp = newhead;
        
//         m[oldtemp]=newtemp;
        
//         oldtemp = head->next;
//         while(oldtemp!=NULL){
//             Node *newnode = new Node(oldtemp->data);
//             newtemp->next = newnode;
//             newtemp = newnode;
//             m[oldtemp]=newtemp;
//             oldtemp = oldtemp->next;
//         }
        
//         oldtemp = head;
//         newtemp = newhead;
        
//         while(oldtemp!=NULL){
//             newtemp->random = m[oldtemp->random];
//             oldtemp=oldtemp->next;
//             newtemp=newtemp->next;
//         }
        
//         return newhead;
        
//     }
// };