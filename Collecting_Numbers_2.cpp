#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,i,j,m;
    cin>>n>>m;
    vector<pair<ll,ll>> v;
    vector<ll> original;
    for(i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.push_back({x,i+1});
        original.push_back(x);
    }
    sort(v.begin(),v.end());
    ll ans=1;
    for(i=0;i<n-1;i++) 
    {
        if(v[i].second>v[i+1].second) ans++;
    }
    while(m--)
    {
        ll a,b;
        cin>>a>>b;
        a--;
        b--;
        
    }
    
    return 0;
}