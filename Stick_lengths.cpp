#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,i,j;
    cin>>n;
    vector<int> v;
    for(i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    ll a,b;
    if(v.size()%2==0)
    {
        a=v.size()/2;
        b=a+1;
    }
    else{
        a=b=((v.size()+1)/2);
    }
    //cout<<v[a]<<" " <<v[b];
    ll ans1=0,ans2=0;
    for(i=0;i<v.size();i++)
    {
        ans1+=abs(v[a-1]-v[i]);
        ans2+=abs(v[b-1]-v[i]);
    }
    ans1=min(ans1,ans2);
    cout<<ans1;
    


	return 0;
}