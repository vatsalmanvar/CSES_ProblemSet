#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,i,j;
    cin>>n;
    vector<ll> modulo(n,0);
    modulo[0]=1;
    ll sum=0,ans=0; 
    for(i=0;i<n;i++)
    {   
        ll x;
        cin>>x;
        sum+=x;
        ll y=((sum%n)+n)%n;
        ans+=modulo[y];
        modulo[y]++;
    }
    cout<<ans;
	return 0;
}