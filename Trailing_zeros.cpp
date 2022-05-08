#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,i,j;
    cin>>n;
    ll ans=0;
    for(i=5;i<=n;i*=5) ans+=n/i;
    cout<<ans;
	return 0;
}