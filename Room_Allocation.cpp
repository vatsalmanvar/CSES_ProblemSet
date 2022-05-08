#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,i,j,x;
    cin>>n;
    ll ans[n];
    array<ll,3> v[n];
    for(i=0;i<n;i++) 
    {
        cin >> v[i][0] >> v[i][1];
        v[i][2]=i;
    }
    sort(v,v+n);
    multiset<array<ll,2>> s;
    ll roomid=0;
    for(i=0;i<n;i++)
    {
        auto it=s.lower_bound({v[i][0]});
        if(it==s.begin())
        {
            x=roomid++;
        }else{
            it--;
            x=(*it)[1];
            s.erase(it);
        }
        s.insert({v[i][1],x});
        ans[v[i][2]]=x;
    }
    cout << roomid << endl;
    for(i=0;i<n;i++) cout << ans[i]+1 << " ";
	return 0;
}