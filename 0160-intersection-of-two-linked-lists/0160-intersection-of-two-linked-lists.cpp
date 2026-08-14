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
        ListNode* p1=headA;
        ListNode* p2=headB;
        ListNode* temp=headA;
        int lengthA=0;
        temp=headA;
        while(temp!=NULL){
            lengthA++;
            temp=temp->next;
        }
        int lengthB=0;
        temp=headB;
        while(temp!=NULL){
            lengthB++;
            temp=temp->next;
        }
        if(lengthA > lengthB){
        int diff=abs(lengthA - lengthB);
        while(diff>0){
            p1=p1->next;
            diff--;
        }
        }else{
            int diff=abs(lengthA - lengthB);
             while(diff>0){
                p2=p2->next;
                diff--;
            }
        }
        while(p1!=p2){
            p1=p1->next;
            p2=p2->next;
        }

        return p1;
    }
};