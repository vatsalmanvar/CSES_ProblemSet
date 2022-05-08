#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void TOH(ll n,ll a,ll b,ll c)
{
    if(n==1){
        cout << a << " " << c << endl;
        return;
    }
    TOH(n-1,a,c,b);
    cout << a << " " << c << endl;
    TOH(n-1,b,a,c);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll t,n,i,j,k;
    cin >> n;
    cout << (pow(2, n))-1 << endl;
    ll a=1,b=2,c=3;
    TOH(n,a,b,c);
    
}