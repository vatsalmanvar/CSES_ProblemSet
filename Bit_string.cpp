#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,i,j;
    cin>>n;
    ll ans=1,mod=(1e9+7);
    while(n--) ans=(ans*2) % mod;
    cout<<ans;
	return 0;
}