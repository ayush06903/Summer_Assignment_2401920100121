class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr=head;
        ListNode* prev=NULL;
        //ListNode* nex=head->NULL;

        while(curr!=NULL){
            ListNode* temp=curr->next;
            curr->next=prev;
            // free(temp);
            prev=curr;
            curr=temp;
            

        }
        //when this loop end prev will be pointing to last node of our ll
        ListNode* new_head=prev;
        return new_head;
        
    }
    
};