#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n,x,i,y,j;
    cin>>n>>x;
    array<ll,2> a[n];
    for(i=0;i<n;i++) cin>>a[i][0],a[i][1]=i+1;
    sort(a,a+n);
    i=0;
    j=n-1;
    while(i<j)
    {
        if(a[i][0]+a[j][0]==x)
        {
            cout<<a[i][1]<<" "<<a[j][1];
            return 0;
        }
        if(a[i][0]+a[j][0]>x) j--;
        else i++;
    }
    cout<<"IMPOSSIBLE";
}