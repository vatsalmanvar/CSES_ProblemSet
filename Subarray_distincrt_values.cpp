#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n,k,i,j;
    cin >> n >> k;
    vector<ll> v(n);
    for(i=0;i<n;i++) cin>>v[i];
    ll ans=0;
    j=0;
    map<ll,ll> mp;
    for(i=0;i<n;i++)
    {
        while(j<n && ((ll)mp.size()<k || mp.count(v[j])>0 ))
        {
            mp[v[j]]++;
            j++;
        }
        ans += j - i;
        mp[v[i]]--;
        if(mp[v[i]]==0) mp.erase(v[i]);
    }
    cout<<ans;


	return 0;
}