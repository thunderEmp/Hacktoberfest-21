# Longest Common Subsequence(LCS) problem is the most important topic of Dynamic Programming.
## Q. What is longest common subsequence?
#### Longest common subsequence of two striings is defined as the longest common subsequence common to two given strings.
### Examples:
``` 'abcabc' & 'abdabd' have 'abab' as the longest common subsequence```

### LCS Problem: 
#### It accepts two Strings
#### It returns the length of the Longest Common Sebsequence

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
### Tabulation Code(best suited):
```
#include<bits/stdc++.h>
using namespace std;
 
int LCS_topDown(string a,int m,string b,int n){
    int dp[m+1][n+1];
    for(int i=0;i<m+1;i++){
        for(int j=0;j<n+1;j++){
            if(i==0||j==0){
                dp[i][j]=0;
            }
        }
    }
    for(int i=1;i<m+1;i++){
        for(int j=1;j<n+1;j++){
            if(a[i-1]==b[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
            }else{
                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
        }
    }
    return dp[m][n];
}
int main(){
   string x;
   cin>>x;
   string y;
   cin>>y;
   cout<<LCS_topDown(x,x.length(),y,y.length());
return 0;
}
```
#### With these two Methods come to play, the time complexity comes to O(n) and thus it is why the best way to solve this problems is using Dynamic Programming.

### Printing LCS:
#### This method shows How to print the longest common Subsequence:
### Code:
```
#include<bits/stdc++.h>
using namespace std;
 
string LCS_topDown(string a,int m,string b,int n){
    int dp[m+1][n+1];
    for(int i=0;i<m+1;i++){
        for(int j=0;j<n+1;j++){
            if(i==0||j==0){
                dp[i][j]=0;
            }
        }
    }
    for(int i=1;i<m+1;i++){
        for(int j=1;j<n+1;j++){
            if(a[i-1]==b[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
            }else{
                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
        }
    }
    string ans="";
    int i=m,j=n;
    while(i>m && j>n){
        if(a[i-1]==b[j-1]){
            ans+=a[i-1];
            i--;j--;
        }else{
            if(dp[i-1][j]>dp[i][j-1]){
                i--;
            }else{
                j--;
            }
        }
    }
    return ans;
}
int main(){
   string x;
   cin>>x;
   string y;
   cin>>y;
   cout<<LCS_topDown(x,x.length(),y,y.length());
return 0;
}

```
