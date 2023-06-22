#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1000000;
struct D{
ll s;
int x;
}P[1200000];
bool cmp(D x,D y){
return x.s>y.s;
}
int tp,K,pt[555555],vl[555555],p[555555],nt[555555],hd[555555],edge[555555],frm[555555],n,m,x,y,z;
int X[555555],Y[555555],Z[555555],nw,ans;
bool T[555555];
ll dis[320000];
void add(int x,int y,int z,int s){++K;pt[K]=y;vl[K]=z;p[K]=s;nt[K]=hd[x];hd[x]=K;}
bool vis[320000];
void dij(){
memset(vis,0,sizeof(vis));
memset(dis,63,sizeof(dis));
dis[1]=0;tp=1;
P[tp].x=1;P[tp].s=0;
while(tp){
int p=P[1].x;pop_heap(P+1,P+tp+1,cmp);tp--;
if(vis[p])continue;vis[p]=1;
for(int i=hd[p];i;i=nt[i])
if(dis[pt[i]]>dis[p]+vl[i])
dis[pt[i]]=dis[p]+vl[i],edge[pt[i]]=i,frm[pt[i]]=p,
++tp,P[tp].x=pt[i],P[tp].s=dis[pt[i]],
push_heap(P+1,P+tp+1,cmp);
}
}
int main(){
cin>>n>>m;
for(int i=1;i<=m;++i){
scanf("%d%d%d",&x,&y,&z);
X[i]=x;Y[i]=y;Z[i]=z;
add(x,y,N+1-z,i);
add(y,x,N+1-z,i);
}
dij();
nw=n;
while(nw!=1)
T[p[edge[nw]]]=1,nw=frm[nw];
for(int i=1;i<=m;++i)
if(T[i]^Z[i])
++ans;
cout<<ans<<endl;
for(int i=1;i<=m;++i)
if(T[i]^Z[i])
printf("%d %d %d\n",X[i],Y[i],1-Z[i]);

}