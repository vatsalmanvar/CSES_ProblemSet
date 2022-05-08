#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,i,j;
    cin>>n;
    vector<ll> v;
    multiset<ll> s;
    for(i=0;i<n;i++) 
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    s.insert(v[0]);
    for(i=1;i<n;i++)
    {
        if(s.upper_bound(v[i])==s.end()){
            s.insert(v[i]);
        }else{
            s.erase(s.upper_bound(v[i]));
            s.insert(v[i]);
        }
    }
    cout<<s.size();

	return 0;
}