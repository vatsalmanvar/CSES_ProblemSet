#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,i,j;
    cin >> n;
    ll a[n];
    for(i=0; i<n; i++)  cin >> a[i];
    sort(a,a+n);
    ll ans=1;
    for(i=0; i<n; i++) 
    {
        if(ans<a[i]) break;
        else ans+=a[i];
    }
    cout << ans; 

    
	return 0;
}