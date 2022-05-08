#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,i1,j;
    cin>>n;
    stack<ll> s,i;
    for(i1=0;i1<n;i1++)
    {
        ll x;
        cin>>x;
        while(!s.empty() && s.top()>=x) 
        {
            s.pop();
            i.pop();
        }
        if(s.empty())
        {
            cout<<"0"<<" ";
        }
        else{
            cout<<i.top()<<" ";
        }
        s.push(x);
        i.push(i1+1);
    
    }
	return 0;
}