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
    ListNode* swapPairs(ListNode* head) {

        ListNode* temp=head ,*nest,*prev=NULL ;

        while(temp!=NULL && temp->next!=NULL){
            
            nest=temp->next;
            temp->next=temp->next->next;
            if(prev==NULL)head=nest;
            else prev->next=nest;
            nest->next=temp;
            prev=temp;
            temp=temp->next;
        }
        return head;
    }
};