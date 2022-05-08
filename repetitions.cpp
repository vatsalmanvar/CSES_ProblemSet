#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,i,j;
    string s;
    cin>>s;
    ll ans=1,x=1;
    for(i=1;i<s.length();i++)
    {
        if(s[i]==s[i-1]) x++;
        else x=1;
        ans=max(ans,x);
    }
    cout<<ans;
	return 0;
}