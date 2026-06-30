class Solution{
public:
    ListNode* removeNthFromEnd(ListNode* head,int n) {
        //FIND LENGTH
        int len=0;
        ListNode* temp=head;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        //convert nth from end to post from beg (v.v.i)
        int pos=len-n+1;
        if(head==NULL){
            cout<<"enpty list"<<endl;
            return head;
        }
        if(pos==1){
            //delete head
            ListNode*temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        else{
            ListNode*prev=head;  
            for(int i=1;i<=pos-2 && prev!=NULL;i++){
                prev=prev->next;
            }
            //invalid pos
            if(prev==NULL||prev->next==NULL){
                //cout<<"invalid";
                return head;
            }
            ListNode*current=prev->next;
            ListNode*forward=current->next;
            //current->next=NULL;
            prev->next=forward;
            delete current;

            return head;//***
        } 
    }
};



    /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */// yha node ki func available nhi h isiliye list node
 //isiliye yha pe return is wrong write return head
 //