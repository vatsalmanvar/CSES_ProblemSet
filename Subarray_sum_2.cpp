#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll temp,n,i,j,x;
    cin>>n>>x;
    map<ll,ll> mp;
    mp[0]=1;
    ll sum=0,ans=0;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        sum+=temp;
        ans+=mp[sum-x];
        mp[sum]++;
    } 
    cout<<ans;
	return 0;
}