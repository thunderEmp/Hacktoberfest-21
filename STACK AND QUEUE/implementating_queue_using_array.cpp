#include<iostream>
using namespace std;
#define n 1000

class queue {
    int *arr;int front;int back;
    public:
    queue(){
        arr=new int[n];
        front=-1;back=-1;
    }
    void push(int x){
        if (back==(n-1))
        {
            cout<<"NO MORE SPACE"<<endl;
            return;
        }
        back++;
        arr[back]=x;
        if(front==-1) front++;   
    }
    void pop(){
        if(front==-1 || front>back) {
            cout<<"QUEUE IS EMPTY"<<endl;
            return;}
            front++;
    }
    bool empty(){
        if(front==-1 || back<front) return true;
        return false;
    }
    int peek(){
        if(front==-1 || back<front) 
        {   cout<<"QUEUE IS EMPTY"<<endl;
            return -1;}
        return arr[front];
    }
    int size()
    {
        if(front==-1 || back<front) 
        {   
            return 0;}
            return (back-front +1);
    }
};
int main()
{
    queue num;
    num.push(1);
    num.push(2);
    num.push(3);
    num.push(4);
    num.push(5);
    cout<<"size :"<<num.size()<<endl;
    num.pop();
    cout<<"size after pop:"<<num.size()<<endl;
    cout<<"rest elements:"<<endl;
    while(!num.empty())
    {
        cout<<num.peek()<<endl;
        num.pop();
    }
    
    return 0;
}
