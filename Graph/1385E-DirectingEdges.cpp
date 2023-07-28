#include<bits/stdc++.h>
using namespace std;
int T,n,m,H[555555],nt[555555],pt[555555],q[555555],du[555555],x[555555],y[555555],z[555555],f[555555],K,hd,tl,d;
void add(int x,int y){++K;nt[K]=H[x];pt[K]=y;H[x]=K;}
int main(){
cin>>T;
while(T--){
cin>>n>>m;
for(int i=1;i<=n;++i)H[i]=du[i]=0;
for(int i=1;i<=K;++i)nt[i]=pt[i]=0;
K=hd=tl=d=0;
for(int i=1;i<=m;++i){
scanf("%d%d%d",&z[i],&x[i],&y[i]);
if(z[i])add(x[i],y[i]),du[y[i]]++;
}
for(int i=1;i<=n;++i)if(!du[i])q[++tl]=i;
while(hd<tl){
++hd;f[q[hd]]=hd;
for(int i=H[q[hd]];i;i=nt[i]){
du[pt[i]]--;
if(!du[pt[i]])
q[++tl]=pt[i];
}
}
if(hd!=n)puts("NO");
else{
puts("YES");
for(int i=1;i<=m;++i)
if(z[i])printf("%d %d\n",x[i],y[i]);
else if(f[x[i]]<f[y[i]])printf("%d %d\n",x[i],y[i]);
else printf("%d %d\n",y[i],x[i]);
}
}
}