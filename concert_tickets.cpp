#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,m,i,j,x;
    cin>>n>>m;
    multiset<ll> ticket;
    for(i=0;i<n;i++) 
    {
        cin>>x;
        ticket.insert(x);
    }
    for(i=0;i<m;i++)
    {
        cin>>x;
        if(ticket.size()==0 || x<*ticket.begin()) 
        {
            cout<<"-1"<<endl;
            continue;
        }
       
        auto y=ticket.lower_bound(x);
        if(*y==x)
        {
            cout<<x<<endl;
            ticket.erase(y);
        }
        else if(y==ticket.end())
        {
            cout<<*--ticket.end()<<endl;
            ticket.erase(--ticket.end());
        }
        else 
        {
            y--;
            cout<<*y<<endl;
            ticket.erase(y);
        }
    }
	return 0;
}