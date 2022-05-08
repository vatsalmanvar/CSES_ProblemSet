#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,i,j,k;
    cin >> n >> k;
    ll a[n];
    for(i=0; i<n; i++) cin >> a[i];
    ll lb=*max_element(a,a+n), rb=1e18;
    while(lb<rb)
    {
        ll mb=(lb+rb)/2;
        ll count=0;
        ll sum=0;
        for(i=0;i<n;i++)
        {
            if(sum+a[i]>mb)
            {
                count++;
                sum=0;
            }
            sum+=a[i];
        }
        count++;
        if(count>k) lb=mb+1;
        else rb=mb;
    }
    cout << lb;
	return 0;
}