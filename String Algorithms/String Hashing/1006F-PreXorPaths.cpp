#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m,p;
ll sm;
ll a[30][30],K;
map<ll,int> t[30][30];
void dfs1(int x,int y,ll k){
if(x>n||y>m)return;
k^=a[x][y];
if(x+y==p+1){
t[x][y][k]++;
return;}
dfs1(x+1,y,k);
dfs1(x,y+1,k);
}
void dfs2(int x,int y,ll k){
if(x<1||y<1)return;
if(x+y==p+1){
sm+=t[x][y][k^K];
return;
}
k^=a[x][y];
dfs2(x-1,y,k);
dfs2(x,y-1,k);
}
int main(){
cin>>n>>m>>K;
p=(n+m)/2;
for(int i=1;i<=n;++i)
for(int j=1;j<=m;++j)
scanf("%lld",&a[i][j]);
dfs1(1,1,0);
dfs2(n,m,0);
cout<<sm;
}