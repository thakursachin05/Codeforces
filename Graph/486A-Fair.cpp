#include<bits/stdc++.h>
using namespace std;
const int N=100100;
int n,m,k,s,a[N],b[N][128],c[N],q[N];
vector<int>g[N];
int main(void){
cin>>n>>m>>k>>s;
for(int i=1;i<=n;++i)cin>>a[i];
for(int i=0,x,y;i<m&&cin>>x>>y;++i)g[x].push_back(y),g[y].push_back(x);
for(int i=1;i<=k;++i){
int hd=0,tl=0;
for(int j=1;j<=n;++j)if(i==a[j])c[j]=i,q[tl++]=j,b[j][i]=0;
while(hd<tl){
int x=q[hd++];
for(int y:g[x])if(i!=c[y])c[y]=i,q[tl++]=y,b[y][i]=b[x][i]+1;
}
}
for(int i=1;i<=n;++i){
sort(b[i]+1,b[i]+k+1);
int x=0;
for(int j=1;j<=s;++j)x+=b[i][j];
cout<<x<<" ";
}
}