#include <bits/stdc++.h>
using namespace std;
typedef int ll;
vector<ll> v;

void solve(ll k,ll next)
{
    if(v.size()==1) {
        cout<<v[0];
        return;
    }else{
        next=(next+k)%v.size();
        cout<<v[next]<<" ";
        v.erase(v.begin()+next);
        next=next%v.size();
        solve(k,next);
    }  
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,i,j,k;
    cin >> n >> k;
    v.clear();
    for(i=0;i<n;i++) v.push_back(i+1);
    ll next=0;
    solve(k,next);   
}