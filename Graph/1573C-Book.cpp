#include <bits/stdc++.h>
using namespace std;
vector<int> v[200005];
int t,i,n,k,x,vis[200005],ok,f[200005];
int dfs(int u){
if(vis[u]==1||ok) {ok=1; return 0;}
if(vis[u]==2) return f[u];
int ans=1; vis[u]=1;
for(int i=0;i<v[u].size();++i)ans=max(ans,dfs(v[u][i])+(u<v[u][i]));
vis[u]=2; return f[u]=ans;
}
int main()
{
cin>>t;
while(t--){
cin>>n; ok=0;
for(i=1;i<=n+1;i++) v[i].clear(),vis[i]=0;
for(i=1;i<=n;i++){
cin>>k; v[n+1].push_back(i);
while(k--) scanf("%d",&x),v[i].push_back(x);
} dfs(n+1),printf("%d\n",ok? -1:f[n+1]);
}

}