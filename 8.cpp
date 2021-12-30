#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//singly ll
class node{
    public:
    int data;
    node* next;
    
    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void insertAtTail(node* &head,int val){
    node* n=new node(val);

    if(head==NULL)
    {
        head=n;
        return;
    }

    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}

void insertAthead(node* &head,int val)
{
    node* n=new node(val);
    n->next=head;
    head=n;
}

node* reverse(node* &head){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;

    while(currptr!=NULL)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}

node* revrec(node* &head)
{
    if(head==NULL||head->next==NULL){
        return head;
    }
    node* newhead=revrec(head->next);

    head->next->next=head;
    head->next=NULL;

    return newhead;
}

void delAthead(node* &head)
{
    node* todelete=head;
    head=head->next;

    delete todelete;
}


void deletion(node* &head,int val)
{
    if(head==NULL)
    {
        return;
    }
    if(head->next==NULL)
    {
        delAthead(head);
    }

    node* temp=head;
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;

    delete todelete;
}


void display(node* head){
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

bool search(node* head,int key)
{
    node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data=key){
        return true;
        temp=temp->next;
        }
    }
    return false;
}
int main()
{
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);

    display(head);
    //cout<<search(head,3);
    //deletion(head,2);
    //delAthead(head);
    node* newhead=revrec(head);
    display(newhead);
    return 0;
}
