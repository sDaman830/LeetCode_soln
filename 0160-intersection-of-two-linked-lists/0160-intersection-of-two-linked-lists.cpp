/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map <ListNode* , int > mp;
        
        ListNode* temp = headA;
        while(temp)
        {
            mp[temp] = 1;
         
            temp = temp->next;
        }
        ListNode* tempb = headB;
        while(tempb)
        {
            if(mp.find(tempb)!=NULL)
                return tempb;
            tempb = tempb -> next;
        }
        return NULL;
        
    }
};