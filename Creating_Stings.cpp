#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,i,j;
    string s;
    cin>>s;
    vector<string> arr;
    sort(s.begin(),s.end());
    arr.push_back(s);
    ll count=1;
    while(next_permutation(s.begin(),s.end())) 
    {
        count++;
        arr.push_back(s);
    }
    cout<<count<<endl;
    for(auto i: arr)
    {
        cout<<i<<endl;
    }
    return 0;
}