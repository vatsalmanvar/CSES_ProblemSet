#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,i,j;
    cin>>n;
    array<ll,2> v[n];
    for(i=0;i<n;i++)
    {
        cin >> v[i][0] >> v[i][1];
    }
    sort(v,v+n);
	ll ans=0,time=0;
    for(i=0;i<n;i++)
    {   
        time+=v[i][0];
        ans+=(v[i][1]-time);
    }
    cout<<ans;
    
    return 0;
}