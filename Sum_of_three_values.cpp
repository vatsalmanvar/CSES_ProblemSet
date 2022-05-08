#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,i,j,target,k;
    cin>>n>>target;
    array<ll,2> arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i][0];
        arr[i][1]=i+1;
    }
    sort(arr,arr+n);
    for(i=0;i<n;i++){
        ll t1=target-arr[i][0];
        for(j=i+1,k=n-1;j<k;j++){
            while(j<k && arr[j][0]+arr[k][0]>t1) --k;
            if(j<k && arr[j][0]+arr[k][0]==t1){
                cout << arr[i][1] << " " << arr[j][1] << " " << arr[k][1];
                return 0;
            }
        }
    }
    cout<<"IMPOSSIBLE";
	return 0;
}