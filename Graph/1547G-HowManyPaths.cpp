#include<bits/stdc++.h>
using namespace std;const int N=6e5+7;
vector<int>v[N];int n,m,as[N],T_T,x,y,i,j,vis[N];
void dfs(int x,int nw){
	if(nw)as[x]=-1;else if(as[x]<2)as[x]++;vis[x]=1;
	for(auto&y:v[x])if(as[y]!=-1){
		if(vis[y])dfs(y,1);else if(as[y]!=2||as[y]==2&&nw)dfs(y,nw);
	}
	vis[x]=0;
}
int main(){
	for(scanf("%d",&T_T);T_T--;){
		for(scanf("%d%d",&n,&m),i=1;i<=m;++i)scanf("%d%d",&x,&y),v[x].push_back(y);
		for(dfs(1,0),i=1;i<=n;++i)printf("%d%c",as[i],i==n?'\n':' '),v[i].clear(),vis[i]=as[i]=0;
	}
}