#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,i,j;
    cin>>n;
    vector<pair<int,int>> v;
    for(i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.push_back({x,i+1});
    }
    sort(v.begin(),v.end());
    ll ans=1;
    for(i=0;i<n-1;i++) 
    {
        if(v[i].second>v[i+1].second) ans++;
    }
    cout<<ans;
    
    return 0;
}