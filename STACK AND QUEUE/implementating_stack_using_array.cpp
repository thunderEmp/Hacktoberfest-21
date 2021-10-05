#include <iostream>
using namespace std;

#define n 1000
class stack
{
    int *arr;
    int Top;

public:
    stack()
    {
        arr = new int[n];
        Top = -1;
    }
    void push(int x)
    {
        if (Top == (n - 1))
          {  cout<<"stack overflow"<<endl;
        return;}
        Top++, arr[Top] = x;
    }
    void pop()
    {
        if (Top == -1)
           { cout << "stack is empty" << endl;
        return;}
        Top--;
    }
    int top()
    {
        if (Top == -1)
        {
            cout << "stack is empty" << endl;
            return -1;
        }
        return arr[Top];
    }
    bool empty()
    {
        if (Top == -1)
            return true;
        return false;
    }
    int size()
    {
        return Top + 1;
    }
};
int main()
{
    stack num;//declaring a stack
    //pushing elements
    num.push(1);
    num.push(2);
    num.push(3);
    num.push(4);
    cout<<num.empty()<<endl;
    cout<<"Intial size:"<<num.size()<<endl;
    while (!num.empty())
    {
        cout<<num.top()<<endl;
        num.pop();
    }
    cout<<"size after :"<<num.size();
    return 0;
}
