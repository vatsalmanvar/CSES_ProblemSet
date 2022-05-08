#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,i,j;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if((a+b)%3==0 && 2*a>=b && 2*b>=a)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
        
    }
	return 0;
}