#include<bits/stdc++.h>
using namespace std;
const int N=200500,M=200500;
int n,m,col[N];
struct E{int u,v;}e[M];
vector<int> g[N];
void dfs(int u){
	for(int v:g[u])
		if(!col[v])
			col[v]=3-col[u],dfs(v);
		else if(col[v]!=3-col[u])
			puts("NO"),exit(0);
}
int main(){
	scanf("%d%d",&n,&m);
	for(int u,v,i=1;i<=m;++i)
		scanf("%d%d",&u,&v),e[i]={u,v},g[u].push_back(v),g[v].push_back(u);
	col[1]=1,dfs(1),puts("YES");
	for(int i=1;i<=m;++i)
		putchar('0'+col[e[i].u]-1);
}
