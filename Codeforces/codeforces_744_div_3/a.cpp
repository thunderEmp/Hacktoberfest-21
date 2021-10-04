#include <bits/stdc++.h>
using namespace std;
using ll=long long int; 
void solve(){
  string x;
	cin >> x;
	ll a = 0, b = 0, c = 0;
	for(auto i: x)
	{
		if (i == 'A') a++;
		else if (i == 'B') b++;
		else c++;
	}
	if (a + c == b) cout << "YES" << endl;
	else cout << "NO" << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}