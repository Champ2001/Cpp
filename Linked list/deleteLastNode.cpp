#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
Node *delLastNode(Node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next == NULL){
        delete(head);
        return NULL;
    }
    Node *curr=head;
    while(curr->next->next != NULL)
        curr=curr->next;
        delete(curr->next);
        curr->next=NULL;//deallocation of memory
        return head;

}

void printlist(Node *head)
{
    Node *curr=head;
    while(curr != NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}
int main(){
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    printlist(head);
    head=delLastNode(head);
    printlist(head);
}