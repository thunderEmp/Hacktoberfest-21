#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define mod 1000000007

bool isPalindrome(lli x) {
    if(x<0){
        return false;
    }
    else if(x==0){
        return true;
    }
    lli size=0;
    lli temp=x;
    while(temp!=0){
        size++;
        temp/=10;
    }
    temp=x;
    lli l,r;
    for(lli i=0; i<size/2; i++){
        r=temp%((lli)(pow(10,i+1)));
        r= r/(lli)(pow(10,i));
        
        l=temp%((lli)(pow(10,size-i)));
        l= l/((lli)(pow(10,size-i-1)));
        if(l!=r){
            return false;
        }
    }
    return true;
    
}

int main(){
    cout<<isPalindrome(1012101)<<endl;
    return 0;
}