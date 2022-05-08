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
        v.push_back({a,1});
        v.push_back({b,-1});
    }
    sort(v.begin(),v.end());
    ll ans=0,maximum=0;
    for(i=0;i<v.size();i++)
    {
        ans=ans+v[i].second;
        maximum=max(maximum,ans);
    }
    cout<<maximum;
    return 0;
}