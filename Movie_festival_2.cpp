#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/
    ll t,n,i,j,k;
    cin >> n >> k;
    vector<pair<ll, ll>> v;
    multiset<ll> s;
    for(i=0; i<k; ++i) 
        s.insert(0);
    for(i=0; i<n; ++i){
        ll a, b;
        cin >> a >> b;
        v.push_back({b,a});
    }
    sort(v.begin(),v.end());
    ll ans=0;
    for(i=0; i<n; ++i){
        ll x=v[i].second;
        auto it=s.upper_bound(x);
        --it; 
        if(*s.begin()>x) continue;
        else if(*--s.end()<x) it=--s.end();
        if(it!=s.end())
        {
            s.erase(it);
            s.insert(v[i].first);
            ans++;
        }
    }
    cout << ans;




    return 0;
}