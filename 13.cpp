#include<iostream>
//doubly ll
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int data)
    {
        this->data=data;
        next=NULL;
        prev=NULL;
    }
};


void insertAtHead(node* &head,int data)
{
    node* n=new node(data);
    n->next=head;
    if(head!=NULL)
    {
        head->prev=n;
    }
    head=n;
}
void insertAtTail(node* &head,int data)
{
    if(head==NULL)
    {
        insertAtHead(head,data);
        return;
    }
    node* n=new node(data);
    node* t=head;

    while(t->next!=NULL)
    {
        t=t->next;
    }
    t->next=n;
    n->prev=t;
}


void deleteAtHead(node* &head)
{
node* todelete=head;
head=head->next;
head->prev=NULL;

delete todelete;
}


void deletion(node* &head,int pos)
{  
    if(pos==1)
    {
        deleteAtHead(head);
        return ;
    }
    node* t=head;
    while(t!=NULL&&pos--!=1)
    {
        t=t->next;
    }
    t->prev->next=t->next;
    if(t->next!=NULL)
    {
        t->next->prev=t->prev;
    }

    delete t;
}
void display(node* head)
{
    node* t=head;
    while(t!=NULL)
    {
        cout<<t->data<<" ";
        t=t->next;    
    }
    cout<<endl;
}       
int main()
{
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    insertAtHead(head,5);
    display(head);
    deletion(head,1);
    display(head);
    return 0;
}