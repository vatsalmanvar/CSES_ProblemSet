#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,i,j;
    cin>>n;
    ll total=((n+1)*n)/2;
    if(n==2 || n==1) 
    {
        cout<<"NO";
        return 0;
    }
    if(total%2==1) cout<<"NO";
    else
    {
        ll x=total/2;
        vector<ll> v1,v2;
        for(i=n;i>0;i--)
        {
            if(x>=i)
            {
                x-=i;
                v1.push_back(i);
            }
            else{
                v2.push_back(i);
            }
        }
        if(x==0)
        {
        cout<<"YES"<<endl;
        cout<<v1.size()<<endl;
        for(i=v1.size()-1;i>=0;i--) cout<<v1[i]<<" ";
        cout<<endl;
        cout<<v2.size()<<endl;
        for(i=v2.size()-1;i>=0;i--) cout<<v2[i]<<" ";
        cout<<endl;
        }
        else cout<<"NO";
    }


	return 0;
}