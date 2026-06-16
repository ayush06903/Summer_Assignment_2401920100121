class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* node1=head;
        ListNode* node2=head;

        //putting node1 ahead of node2 by n nodes
        while(n!=0){
            node1=node1->next;
            n--;
        }

        if(node1==NULL){
            ListNode* temp=head;
            head=head->next;
            delete(temp);
            return head;
        }

        //one node is at first node and other one is n nodes ahead of it

        while(node1->next!=NULL){
            node1=node1->next;
            node2=node2->next;
        }

        ListNode* temp=node2->next;
        node2->next=node2->next->next;
        delete(temp);
        
        return head;
    }
};