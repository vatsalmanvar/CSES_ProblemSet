#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,i,x,capacity;
    cin>>n>>capacity;
    vector<ll> v;
    for(i=0;i<n;++i)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    ll ans=n,j=n-1;
    for(i=0;i<n;i++)
    {
        if(i>=j) break;
        while(v[i]+v[j]>capacity) j--;
        if(i<j) 
        {
            ans--;
            j--;
        }
    }    
    cout<<ans;
	return 0;
}