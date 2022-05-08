#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,i,j,x,y,ans;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(x==y) ans=((x-1)*(x-1))+x;
        else if(y>x)
        {
            if(y%2==0) ans= ((y-1)*(y-1))+x;
            else ans= ((y-1)*(y-1))+(y*2)-x;
        }
        else
        {
            if(x%2==1) ans=((x-1)*(x-1))+y;
            else ans= ((x-1)*(x-1))+(x*2)-y;
        }
        cout<<ans<<endl;
    }
	return 0;
}