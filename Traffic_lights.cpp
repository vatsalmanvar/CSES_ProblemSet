#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,i,j,x1;
    cin>>x1>>n;
    multiset<ll> a,b;
    a.insert(0);
    a.insert(x1);
    b.insert(x1);
    for(i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        auto y=a.upper_bound(x);
        auto z=(y);
        z--;
        b.erase(b.find(abs(*y - *z)));
        b.insert(abs(x-*z));
        b.insert(abs(*y-x));
        a.insert(x);
        cout<<*(--b.end())<<" ";
    }
    
	return 0;
}