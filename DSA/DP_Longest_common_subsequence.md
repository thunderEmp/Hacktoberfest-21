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
