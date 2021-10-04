#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define mod 1000000007

vector<lli> prime_factors(lli n) { 
    vector<lli> v;
    while (n%2 == 0) { 
        v.push_back(2); 
        n = n/2; 
    } 
    for (lli i=3; i*i<=n; i = i+2) { 
        while (n%i == 0) { 
            v.push_back(i); 
            n = n/i; 
        } 
    } 
    if (n > 2) 
        v.push_back(n); 
    return v;
} 

int main(){
    lli n;
    cout<<"enter the number"<<endl;
    cin>>n;
    vector<lli> v=prime_factors(n);
    cout<<"prime factors are:"<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}