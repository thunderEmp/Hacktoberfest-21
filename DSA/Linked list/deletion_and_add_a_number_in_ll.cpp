#include<bits/stdc++.h>
//#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }

};

void insertAtTail(node* &head, int val){
    node* n=new node(val);

    if (head==NULL)
    {
        head=n;
        return;
    }
    
    node* temp =head;
    while (temp -> next != NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    
}

void insertAtHead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}

void toDeleteAtHead(node* &head){
    node* todelete=head;
    head=head->next;

    delete todelete;
}

void toDelet(node* &head,int val){
    node* temp=head;
    if (temp==NULL){
        return;
    }
    if (head->next==NULL){
        toDeleteAtHead(head);
        return;
    }
    if (head->data==val)
    {
        node* todelete =temp;
        head=head->next;
        delete todelete;
        return;
    }
    
    
    while (temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete =temp->next;
    (temp->next)=temp->next->next;

    delete todelete;
}

void display(node* head){
    node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

bool search(node* head,int key){
    node* temp=head;
    while (temp!=NULL)
    {
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

int main(){
    //block of memory call nodes
    //nodes contain two fiels -> data and next

    cout<<"Hello"<<endl;
    node* head=NULL;
    insertAtTail(head,2);
    insertAtTail(head,5);
    insertAtTail(head,7);
    display(head);
    insertAtHead(head,9);
    display(head);
    cout<<search(head,3)<<endl;
    toDelet(head,7);
    display(head);
    toDelet(head,9);
    display(head);


 return 0;
}
