#include<bits/stdc++.h>
#define N 200010
using namespace std;
int n,sz[N],fl,m,ii,vis[N],cnt;
vector<int> ve[N];

void dfs(int x){
if(vis[x]) return ;
sz[ii]++;vis[x]=1;
if(ve[x].size()!=2) fl=0;
for(auto i:ve[x]) dfs(i);
}

int main(){
cin>>n>>m;
for(int i=1;i<=m;i++){
int u,v;
cin>>u>>v;
ve[u].push_back(v);
ve[v].push_back(u);
}
for(int i=1;i<=n;i++){
if(!vis[i]){
fl=1;
dfs(i);
cnt+=fl;
}
}
cout<<cnt;
return 0;
}