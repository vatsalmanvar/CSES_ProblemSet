#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    ll n,i,j;
    cin>>n;
    ll arr[n],sum=0,ans=0;
    for(i=0;i<n;i++) cin>>arr[i],sum+=arr[i];
    for(i=0;i<(1<<n);i++)
    {
        ll s=0;
        for(j=0;j<n;j++)
        {
            if(i>>j & 1)
            {
                s+=arr[j];
            }
        }   
        if(s<=sum/2)
            ans=max(ans,s);

    }
    cout<<sum-2*ans;

    return 0;
}