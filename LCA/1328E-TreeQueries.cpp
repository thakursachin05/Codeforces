#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,t1,pa[200010],s[200010],e[200010],cnt;
vector <int> A[200100];
void dfs(int x,int fa){
	int i;
	pa[x]=fa;
	s[x]=++cnt;
	for(i=0;i<A[x].size();i++){
		if(A[x][i]==fa)continue;
		dfs(A[x][i],x);
	}
	e[x]=cnt;
}
int main(){
	int i,x,y,mn,mx,k;
	scanf("%d%d",&n,&t1);
	for(i=1;i<n;i++){
		scanf("%d%d",&x,&y);
        A[x].push_back(y);
        A[y].push_back(x);
	}
	dfs(1,0);
	while(t1--){
		scanf("%d",&k);
		mx=1;mn=n;
		for(i=1;i<=k;i++){
			scanf("%d",&x);
			if(x!=1)x=pa[x];
			mx=max(mx,s[x]);
			mn=min(mn,e[x]);
		}
		if(mx<=mn)puts("YES");
		 else puts("NO");
	}
}
  			  	 	 	 	  	  							    	