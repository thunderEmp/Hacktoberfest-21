// Problem link: https://codeforces.com/contest/1579/problem/E1

#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>

using namespace std;
//using namespace __gnu_pbds;

#define sz(x)                 (int)(x).size()
#define all(x)                (x).begin(), (x).end()
#define tr(x, it)             for(auto (it) = (x).begin();it != (x).end();it++)
#define fo(i, k, n)           for(int i = (k);i < (n);i++)
#define Fo(i, k, n)           for(int i = (k);i >= (n);i--)
#define el                    "\n"
#define ff                    first
#define ss                    second
#define ll                    long long
#define pb                    push_back
#define mp                    make_pair
#define pii                   pair<int, int>
#define vi                    vector<int>
#define mii                   map<int, int>
//#define pqb                   priority_queue<int>
//#define pqs                   priority_queue<int, vi, greater<int>>
//#define pc(x)                 putchar(x);
//#define setbits(x)            __builtin_popcountll(x)
//#define zrobits(x)            __builtin_ctzll(x)
#define mod                   1000000007
#define inf                   9e18
//#define ps(x, y)              fixed<<setprecision(y)<<x
//#define mk(arr, n, type)      type *arr = new type[n];
//#define w(x)                  int x; cin>>x; while(x--)
#define deb(x)                cout<<#x<< " = "<< (x)<<"\n";

int isPossible(vector<vector<int>>&grid, int i, int j){
	int len = 0;
	for(int a = 0; a < min(min(i+1, j+1), (int)grid[0].size()-j); a++){
		if(grid[i-a][j-a]==1 && grid[i-a][j+a]==1) len++;
		else break;
	}
	return len-1;
}

void remove(vector<vector<int>>&copy, int i, int j, int len){
	for(int a = 0; i < len+1; a++){
		copy[i-a][j-a] = 0;
		copy[i-a][j+a] = 0;
	}
}

void solve(){
	int n;
	cin>>n;
	vector<int> a(n);
	list<int> l;
	fo(i, 0, n){
		cin>>a[i];
		if(i == 0) l.push_back(a[i]);
		else if(a[i] <= l.front()) l.push_front(a[i]);
		else l.push_back(a[i]);
	}
	tr(l, it){
		cout<<*it<<" ";
	}
}

int main()
{ 
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t = 1;
	cin>>t;	
	fo(i, 0, t){
		solve();
		cout<<endl;
	}
	return 0;
}