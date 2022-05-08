#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// this approach is called sliding window approach

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,i,j,sum,x;
    cin>>n>>x;
    ll a[n];
    for(i=0;i<n;i++) cin>>a[i];
    i=j=sum=0;
    ll ans=0;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
        while(sum>=x)
        {
            if(sum==x) ans++;
            sum-=a[j];
            j++;
        }
    }
    cout<<ans;
    

     
        
    
	return 0;
}