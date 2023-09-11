#include<stdio.h>
#define z int
#define y for(z i=1;i<=n;++i)
#define x for(z i=h[u];i;i=a[i].n)
#define w a[i].t
struct node{z n,t;}a[400005];z d[200005],h[200005],f[200005],n,k,l,i,b;void c(z v,z u){a[++i].n=h[v];w=u;h[v]=i;}void e(z u){x{if(f[u]==w)continue;f[w]=u;e(w);d[u]+=d[w]+(i&1);}}void g(z u){x{if(f[u]==w)continue;d[w]=d[u]+(i&1?-1:1);g(w);}}z main(){scanf("%d",&n);b=n;y{if(~scanf("%d%d",&k,&l)){c(l,k);c(k,l);}}e(1);g(1);y if(d[i]<b)b=d[i];printf("%d\n",b);y if(d[i]==b)printf("%d ",i);return 0;}