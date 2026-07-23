/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        //empty list
        if(head==NULL){
            return head;
        }
        //single node in ll
        if(head->next==NULL){
            return head;
        }
        //main logic to remove by creating prev and curr ptr
        ListNode *prev=head;
        ListNode *curr=head->next;
        while(curr!=NULL){
            if(curr->val!=prev->val){
                curr=curr->next;
                prev=prev->next;
            }else{
                prev->next=curr->next;//pre ko curr next se connect kro
                curr->next=NULL; 
                delete curr;
                //initialize curr
                curr=prev->next;
            }
        }
        return head;
    }
};