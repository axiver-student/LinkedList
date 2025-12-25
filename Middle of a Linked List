class Solution {
  public:
    int getMiddle(Node* head) {
        // code here
        Node *temp=head;
        int count=0;
        int mid;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        if(count==1){
            return head->data;
        }
        mid=(count/2);
        int data;
        temp=head;
        for(int i=1;i<=mid;i++){
            temp=temp->next;
        }
        data=temp->data;
        return data;
        
    }
};
