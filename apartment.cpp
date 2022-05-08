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
    ll t,n,m,k,i,j,x;
    cin >> n >> m >> k;
    vector<ll> applicant,apartment;
    for(i=0;i<n;i++) 
    {
        cin>>x;
        applicant.push_back(x);
    }
    for(i=0;i<m;i++) 
    {
        cin>>x;
        apartment.push_back(x);
    }
    sort(apartment.begin(),apartment.end());
    sort(applicant.begin(),applicant.end());
    ll ans=0;
    for(i=0, j=0; i<n; i++)
    {
        while(j<m && applicant[i]-k > apartment[j])
            j++;
        if(j<m && applicant[i]+k >= apartment[j] ){
            j++;
            ans++;
        }
    }
    cout<<ans;
	return 0;
}