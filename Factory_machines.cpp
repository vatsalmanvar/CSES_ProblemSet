#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll p,n,i,j;
    cin >> n >> p;
    vector<ll> v;
    for(i=0;i<n;i++){
        ll x;
        cin >> x;
        v.push_back(x);
    }
    ll ans,a=1,b=LLONG_MAX-100,mid;
    while(a<b)
    {
        mid=(a+b)/2;
        ll s=0;
        for(ll z:v)
            s+=min(mid/z,ll(1e9));

        if(s>=p) b=mid;
        else a=mid+1;
    }
    cout << a;
	return 0;
}