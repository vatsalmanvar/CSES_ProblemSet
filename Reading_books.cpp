#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,i,j;
    cin>>n;
    ll arr[n],s=0;
    for(i=0;i<n;i++) cin >> arr[i] , s+=arr[i];
    sort(arr,arr+n);
    cout<<max(s,2ll*arr[n-1]);
	return 0;
}