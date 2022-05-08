#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n,i;
    cin>>n;
    ll arr[n];
    for(i=0;i<n;i++) cin>>arr[i];
    ll ans=LLONG_MIN,temp=0;
    for(i=0;i<n;i++)
    {
        temp=max(temp+arr[i],arr[i]);
        ans=max(ans,temp);
    }
    cout<<ans;
    return 0;
}