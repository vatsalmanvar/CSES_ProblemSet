#include <bits/stdc++.h>
using namespace std;
typedef int ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,i,j;
    cin>>n>>t;
    ll a[n];
    for(i=0;i<n;i++) cin>>a[i];
    unordered_map<ll,pair<ll,ll>> mp;
    mp.reserve(1<<20);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            ll t1=t-a[i]-a[j];
            if(mp.find(t1)!=mp.end())
            {
                cout<<i+1<<" "<<j+1<<" "<<(mp[t1].first)+1 <<" "<<(mp[t1].second)+1 ;
                return 0;
            }
        }
        for(j=0;j<i;j++)
        {
            if(a[i]+a[j]<t)   mp[a[i]+a[j]]={i,j};
        }
    }
    cout<<"IMPOSSIBLE";
	return 0;
}