#include<bits/stdc++.h>
using namespace std;
int  n, m, cc=0;
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
char v[1001][1001];
int visited[1001][1001];

bool isvalid(int x, int y){
    if(x<0 || x>=n || y<0 || y>=m) return false;
    if(v[x][y]=='#' || visited[x][y]==1) return false;
    return true;
}

void dfs(int x, int y){
    visited[x][y] = 1;
    for(int i=0; i<4; i++){
        if(isvalid(x+dx[i], y+dy[i])){
            dfs(x+dx[i], y+dy[i]);
        }
    }
    return;
}

int main(){
    int i, j;
    cin >> n >> m;

    for(i=0; i<n; i++){
        for(j=0; j<m; j++) cin>>v[i][j];
    }

    for(i=0; i<n; i++){
        for(j=0; j<m; j++) {
            if(v[i][j]=='.' && visited[i][j]==0){
                dfs(i, j);
                cc++;
            }
        }
    }
    cout<<cc<<endl;
    return 0;
}