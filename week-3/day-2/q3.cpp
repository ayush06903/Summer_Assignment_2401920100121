class Solution {
public:
bool isPalindrome(ListNode* head){
    //first we will find the middle node using slaow fas pointer
    ListNode* slow=head;
    ListNode* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }

    //need to break the ll in two parts

    ListNode* curr=slow->next;
    ListNode* prev=slow;
    slow->next=NULL;


    //need to everse the second half of ll
    while(curr!=NULL){
        ListNode* newnode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=newnode;
    }

    //now we will compare
    //at the end of while loop prev will be at last node since terminating condition is curr!=null

    ListNode* head1=head;
    ListNode* head2=prev;
    while(head2!=NULL){
        if(head1->val!=head2->val) return false;
        head1=head1->next;
        head2=head2->next;
    }
    return true;



}

};