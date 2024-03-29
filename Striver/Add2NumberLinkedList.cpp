#include<bits/stdc++.h>
using namespace std;
struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x){
        next=NULL;
        val = x;
    }
};
class Solution{
    ListNode* addtwoNumbers(ListNode *l1,ListNode* l2){
        ListNode *dummy=new ListNode(0);
        ListNode *temp=dummy;
        int carry=0;
        while(l1 !=NULL ||l2 !=NULL ||carry){
            int sum=0;
            if(l1 !=NULL){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2 != NULL){
                sum+=carry;
                l2=l2->next;
            }
            sum+=carry;
            carry=sum/10;
            ListNode *node=new ListNode(sum%10);
            temp->next=node;
            temp=temp->next;
        }
        return dummy->next;
    }
};