#include <bits/stdc++.h>
using namespace std;
using ll=long long int; 
void solve(){
    
    ll n;
    cin>>n;
    ll arr[n];
    priority_queue<pair<ll,ll>> pq;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i])
        pq.push({arr[i],i});
    }

    vector<pair<ll,ll>> v;
    while(pq.size()>1){
        pair<ll,ll> p = pq.top();
        pq.pop();
        pair<ll,ll> p1 = pq.top();
        pq.pop();
        v.push_back({p.second+1,p1.second+1});
        p.first--;
        p1.first--;
        if(p.first){
            pq.push(p);
        }
        if(p1.first){
            pq.push(p1);
        }
    }
    cout<<v.size()<<endl;
    for(auto it : v){
        cout<<it.first<<" "<<it.second<<endl;
    }
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