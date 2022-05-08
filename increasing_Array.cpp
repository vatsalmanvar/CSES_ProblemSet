#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,ans=0,x,ma,i,j;
    cin>>n;
    cin>>x;
    ma=x;
    for(i=1;i<n;i++)
    {
        cin>>x;
        ma=max(ma,x);
        ans+=(ma-x);
    }
    cout<<ans;
	return 0;
}