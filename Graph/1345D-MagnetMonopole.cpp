#include<bits/stdc++.h>
using namespace std;
const int N=1e3+5;
char mp[N][N];
int n,m,f1,f2,ans,d[4][2]={0,1,0,-1,1,0,-1,0};
void dfs(int x,int y){
	mp[x][y]='.';
	for(int i=0,nx,ny;i<4;i++){
		nx=x+d[i][0],ny=y+d[i][1];
		if(nx>=1&&nx<=n&&ny>=1&&ny<=m&&mp[nx][ny]=='#')
			dfs(nx,ny);
	}
}
int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
		scanf("%s",mp[i]+1);
	for(int i=1;i<=n;i++){
		int c=0;
		for(int j=1;j<=m;j++)
			if(mp[i][j]=='#')
				if(!c||mp[i][j-1]=='.') c++;
		if(c>1) return puts("-1"),0;
		if(!c) f1=1;
	}
	for(int j=1;j<=m;j++){
		int c=0;
		for(int i=1;i<=n;i++)
			if(mp[i][j]=='#')
				if(!c||mp[i-1][j]=='.') c++;
		if(c>1) return puts("-1"),0;
		if(!c) f2=1;
	}
	if(f1+f2==1) return puts("-1"),0;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			if(mp[i][j]=='#') dfs(i,j),ans++;
	printf("%d\n",ans);
	return 0;
}
