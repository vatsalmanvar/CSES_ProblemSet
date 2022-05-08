#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,i;
    cin>>n;
    vector<ll> v;
    map<ll,ll> m;
    for(i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
        m[x]=-1;
    }
    ll ans=1;
    ll a=0,b=0;
    m[v[0]]=0;
    for(i=1;i<n;i++)
    {
        ll element=v[i];
        if(m[element]>=m[v[a]])
        {
            a=m[element]+1;
        }
        m[element]=i; 
        b=i;
        //cout<<a<<" "<<b<<endl;
        ans=max(ans,b-a+1);
    }
    cout<<ans;



	return 0;
}