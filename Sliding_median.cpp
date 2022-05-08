#include <bits/stdc++.h>
using namespace std;

int a[int(2e5)];
int n, k, i;
array<int, 2> med={-1}; 
set<array<int, 2>> bot, top;

void fix(){
    // k=1 0 0
    // k=2 0 1
    // k=3 1 1
    int m=1+bot.size()+top.size();
    if(bot.size()<(m-1)/2){
        bot.insert(med);
        med=*top.begin();
        top.erase(med);
    }
    if(bot.size()>(m-1)/2){
        top.insert(med);
        med=*--bot.end();
        bot.erase(med);
    }
}

void add(array<int, 2> x){
    if(med[0]==-1){
        med=x; 
        return;
    }
    if(x<med)
        bot.insert(x);
    else
        top.insert(x);
    fix();
}

void rem(array<int, 2> x){
    if(x==med){
        med=*top.begin();
        top.erase(med);
    }
    else if(x<med)
        bot.erase(x);
    else   
        top.erase(x);
    fix();
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    cin >> n >> k;
    for(i=0; i<n; ++i) 
        cin >> a[i];
    if(k==1)
    {
        for(i=0; i<n; ++i) 
            cout << a[i] << " ";
        return 0;
    }
    for(i=0; i<k-1; ++i)
        add({a[i], i}); 
    for(i=k-1 ; i<n; ++i){
        add( {a[i], i} );
        cout << med[0] << " ";
        rem( {a[i-k+1], i-k+1} );
    }
	return 0;
}