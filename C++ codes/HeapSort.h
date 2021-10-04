#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void swap(int *a,int *b)
{//function to swap
 int temp=*a;
 *a=*b;
 *b=temp;
}
void maxHeapify(int a[],int n,int i)
{//function for making maximum heap
 int largest=i;
 int l=(2*i)+1;
 int r=(2*i)+2;
 if(l<n && a[l]>a[largest])
 {
 largest=l;
 }
 if(r<n && a[r]>a[largest])
 {
 largest=r;
 }
 if(largest!=i)//checking if the value of largest is updated or not
 {
 swap(&a[i],&a[largest]);
 maxHeapify(a,n,largest);
 }
}
void heapSort(int a[],int n)
{
 int i;
 for(i=n/2-1;i>=0;i--)
 {
 maxHeapify(a,n,i);
 for(i=n-1;i>0;i--)
 {
 swap(&a[0],&a[i]);
 maxHeapify(a,i,0);
 }
}
int main()
{
 cout<<"Enter the number of elements in an array:";
 int n,i;
 clock_t start,end;
 cin>>n;
 cout<<"Enter the elements of the array:";
 int a[n];
 for(i=0;i<n;i++)
 {
 cin>>a[i];
 }
 cout<<"The array elements are:"<<endl;
 for(i=0;i<n;i++)
 {
 cout<<a[i]<<" ";
 
 }
 cout<<endl;
 cout<<"The sorted array elements are:"<<endl;
 start=clock();
 heapSort(a,n);
 end=clock();
 for(i=0;i<n;i++)
 {
 cout<<a[i]<<" ";
 }
 cout<<endl;
 double tc=difftime(end,start)/CLOCKS_PER_SEC;
 printf("Time taken=%lf",tc);
 return 0;
}








