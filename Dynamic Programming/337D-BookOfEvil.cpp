#include<bits/stdc++.h>
using namespace std;
int n,m,d,res,h[100005],p,ans;
vector<int>e[100005];
bool q[100005],v[100005];
void dfs(int u,int fa){
	h[u]=h[fa]+1;q[u]&=(h[u]<=d);
	if(v[u]&&h[u]>res)res=h[u],p=u;
	for(int i=0;i<e[u].size();i++)if(e[u][i]!=fa)dfs(e[u][i],u);
}
int main(){
	scanf("%d%d%d",&n,&m,&d);
	memset(q,1,sizeof q);h[0]=-1;
	for(int i=1,x;i<=m;i++)scanf("%d",&x),v[x]=1,p=x;
	for(int i=1,x,y;i<n;i++)scanf("%d%d",&x,&y),e[x].push_back(y),e[y].push_back(x);
	dfs(p,0);dfs(p,0);dfs(p,0);
	for(int i=1;i<=n;i++)ans+=q[i];
	printf("%d\n",ans);
	return 0;
}