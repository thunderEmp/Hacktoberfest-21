#include<iostream>
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
class queue{
    node* front;
    node* back;

    public:
    queue(){
        front=NULL;
        back=NULL;
    }
    void push(int x){
        node* n=new node(x);
        if(front==NULL) {front=n;back=n;}
        back->next=n;
        back=n;

    }
    void pop()
    {
        if(front==NULL){
            cout<<"QUEUE IS EMPTY"<<endl;return;
        }
        node* del=front;
        front=front->next;

        delete del;
    }
    int peek()
    {
        if(front==NULL){
            cout<<"QUEUE IS EMPTY"<<" ";return -1;
        }
        return front->data;
    }
    bool empty(){
        if(front==NULL)
        return true;
        return false;
    }
};
int main()
{
    queue num;
    num.push(1);
    num.push(2);
    num.push(3);
    num.push(4);
    while(!num.empty())
    {
        cout<<num.peek()<<endl;
        num.pop();
    }
    return 0;
}
