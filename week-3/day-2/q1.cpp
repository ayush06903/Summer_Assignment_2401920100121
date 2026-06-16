class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummyheadnode=new ListNode(-1);

        ListNode* ptr1=list1;
        ListNode* ptr2=list2;
        ListNode* ptr3=dummyheadnode;


        while(ptr1!=NULL && ptr2!=NULL){

            if(ptr1->val < ptr2->val){
                ptr3->next=ptr1;
                ptr1=ptr1->next;
            }else if(ptr1->val > ptr2->val){
                ptr3->next=ptr2;
                ptr2=ptr2->next;
            }else{
                ptr3->next=ptr1;
                ptr1=ptr1->next;
                ptr3=ptr3->next;

                ptr3->next=ptr2;
                ptr2=ptr2->next;
            }
            ptr3=ptr3->next;
        }



        if(ptr1!=NULL){               //ptr2 is already at null
            ptr3->next=ptr1;
        }

        else if(ptr2!=NULL){          //ptr1 is at null
            ptr3->next=ptr2;
        }

        return dummyheadnode->next;

        

        
    }
};