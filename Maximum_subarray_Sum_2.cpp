#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll t,n,i,j,a1,b1,k;
    cin >> n >> a1 >> b1;
    ll a[n+1];
    set<array<ll,2>> s;
    for(i=0; i<n; ++i){
        cin>>a[i+1];
        a[i+1]+=a[i];
    }
    ll ans=-1e18;
    for(i=0; i<=n; ++i)
    {
        if(i>=a1)
            s.insert({a[i-a1],i-a1});
        if(s.size())
            ans=max(ans,a[i]-(*s.begin())[0]);
        if(i>=b1)
            s.erase({a[i-b1],i-b1});
    }
    cout << ans;

	return 0;
}