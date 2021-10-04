// Given an array containing n elements in which except two all exist in pair, find the two numbers.
// Time Complexity -- O(n)
#include<bits\stdc++.h>
using namespace std;
void find(int arr[],int n)
{
    int x=0;
    for(int i=0;i<n;i++)
    {
        x=x^arr[i];
    }
    int setbit= x&(~(x-1));
    int a=0,b=0;
    for(int i=0;i<n;i++)
    {
        if(setbit&arr[i])
        {
            a=a^arr[i];
        }
        else
        {
            b=b^arr[i];
        }
    }
    cout<<"Numbers are "<<a<<" and "<<b<<".";
}
int main()
{
    int n;
    cout<<"Enter No. of Elements in Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    find(arr,n);
    return 0;
}
