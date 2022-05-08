#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll i,j,n;
    cin>>n;
    vector<pair<ll,ll>> v;
    for(i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        v.push_back({b,a});
    }
    sort(v.begin(),v.end());
    ll ans=0,x=0;
    
    for(i=0;i<v.size();i++)
    {
        if(v[i].second>=x)
        {
            ans++;
            x=v[i].first;
        }
    }
    cout<<ans;
    return 0;
}