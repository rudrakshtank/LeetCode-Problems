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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL && n==1) return NULL;
        ListNode* temphead=head;
        int totalnode=0;
        while(temphead!=NULL){
            temphead=temphead->next;
            totalnode++;
        }
        int node=totalnode-n+1;
        int count=1;
        ListNode* prev=NULL,*next=head;
        while(count!=node){
            prev=next;
            next=next->next;
            count++;
        }
        next=next->next;
        if(prev==NULL) head=head->next; 
        if(prev!=NULL) prev->next=next;
        return head;
    }
};
