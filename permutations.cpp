#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,x,n,i,j;
    cin>>n;
    if(n==0) { }
    else if(n==2 || n==3 ) cout<<"NO SOLUTION";
    else{
         x=2;
        while(x<=n)
        {
            cout<<x<<" ";
            x+=2;
        }
        x=1;
        while(x<=n)
        {
            cout<<x<<" ";
            x+=2;
        }
       
    }
	return 0;
}