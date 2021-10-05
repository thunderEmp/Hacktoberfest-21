# Longest Common Subsequence(LCS) problem is the most important topic of Dynamic Programming.
## Q. What is longest common subsequence?
#### Longest common subsequence of two striings is defined as the longest common subsequence common to two given strings.
### Examples:
``` 'abcabc' & 'abdabd' have 'abab' as the longest common subsequence```
### Recurrsive Code of LCS:
``` #include<bits/stdc++.h>
    using namespace std;
 
    int LCS(string x,int m,string y,int n){
        if(m==0||n==0){
            return 0;
        }
        if(x[m-1]==y[n-1])return 1+LCS(x,m-1,y,n-1);
        return max(LCS(x,m,y,n-1),LCS(x,m-1,y,n));
    }
    int main(){
       string x,y;
       cin>>x>>y;
       cout<<LCS(x,x.length(),y,y.length());
    return 0;
    }
```
### Limitation of the recursive code and why Dynamic Programming:
#### It has a time complexity of 2 power n which is not acceptable. So to reduce the time complexity and to avoid the unneccessary function call, the method of memorisation and tabulation comes into play.

### Memorisation Code:
```
#include<bits/stdc++.h>
using namespace std;
 
int dp[20][20]={-1};
int LCS(string a, int m,string b,int n){
    if(dp[m][n]!=-1)return dp[m][n];
    if(m==0||n==0){
        dp[m][n]=0;
        return dp[m][n];
    }
    if(a[m-1]==b[n-1]){
        dp[m][n]=1+LCS(a,m-1,b,n-1);
    }else{
        dp[m][n]=max(LCS(a,m-1,b,n),LCS(a,m,b,n-1));
    }
    return dp[m][n];
}
int main(){
   string x,y;
   cin>>x>>y;
   cout<<LCS(x,x.length(),y,y.length());
return 0;
}
```
