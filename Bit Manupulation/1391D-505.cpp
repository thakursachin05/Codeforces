#include <bits/stdc++.h>
using namespace std;
int dp[1000000][8],u=1e9,c[8][8],n,m;
#define fo(i,a) for(int i=0;i<a;++i)
int main() {
    cin>>n>>m;
    if(n>=4)cout<<-1;
    else if(n==1)cout<<0;
    else{
    vector<string>mat(n);
    fo(i,n) cin>>mat[i];
    memset(dp,0x3f,sizeof(dp));
    fo(i,1<<n) {
	dp[0][i]=0;
	fo(j,1<<n)fo(k,n-1)c[i][j]|=!(((i>>k&1)+(j>>k&1)+(i>>k+1&1)+(j>>k+1&1))&1);
    }
    fo(i,m) {
	++i;
	fo(j,1<<n) {
	    fo(k,1<<n)if(!c[j][k])dp[i][j]=min(dp[i][j],dp[i-1][k]);
	    fo(k,n)dp[i][j]+=mat[k][i-1]&1^j>>k&1;
	    if(i==m)u=min(u,dp[i][j]);
	}
	--i;
    }
    cout<<u;
}
}
