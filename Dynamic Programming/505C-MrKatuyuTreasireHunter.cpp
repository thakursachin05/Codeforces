#include<bits/stdc++.h>
using namespace std;
int n,k,o[30110],dp[30110][2000],x;
int dfs(int s,int l){
if (dp[s][l]+1) return dp[s][l];
int res=0,i,v;
for (i=-1;i<2;++i){
  v=s+i+l;
  if (v>30001|v<=s) continue;
  res=max(res,dfs(v,l+i));
  }
return dp[s][l]=res+o[s];
}
int main(){
memset(dp,-1,sizeof dp);
for (cin>>n>>k;n--;o[x]++) cin>>x;
cout<<dfs(k,k);
}
