#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,i,j;
    string s;
    cin>>s;
    ll arr[26]={};
    for(i=0;i<s.length();i++)
    {
        arr[s[i]-'A']++;
    }
    ll count=0;
    for(i=0;i<26;i++)
    {
        if(arr[i]%2==1) count++;
    }
    if(s.length()%2==1 && count>1)
    {
        cout<<"NO SOLUTION";
        return 0;
    }
    if(s.length()%2==0 && count>0)
    {
        cout<<"NO SOLUTION";
        return 0;
    }
    ll index=-1;
    string ans="";
    for(i=0;i<26;i++)
    {
        if(arr[i]%2==0)
        {
            ll x=arr[i]/2;
            while(x--) ans+=('A'+i);
        }
        else{
            index=i;
        }
    }
    if(index!=-1)
    {
        ll x=arr[index]/2;
        while(x--) ans+=('A'+index);
        ans+=('A'+index);
    }
    cout<<ans;
    ll x;
    if(s.length()%2==1) x=ans.length()-2;
    else x=ans.length()-1;
    for(i=x;i>=0;i--) cout<<ans[i];




    
	return 0;
}