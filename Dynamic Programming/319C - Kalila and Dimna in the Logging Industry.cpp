#include <cstdio>
#include<bits/stdc++.h>
const int N = 100003;
int n,a[N],b[N],q[N]; long long f[N];
main(){
auto S = [](int i,int j){ return (double)(f[i]-f[j])/(b[j]-b[i]); };

scanf("%d",&n);
for(int i=1;i<=n;++i) scanf("%d",a+i);
for(int i=1;i<=n;++i) scanf("%d",b+i);
int l=1,r=1; q[1]=1;
for(int i=2;i<=n;++i){
while(l<r&&S(q[l+1],q[l])<=a[i]) ++l;
f[i]=f[q[l]]+1ll*b[q[l]]*a[i];
while(l<r&&S(q[r],q[r-1])>=S(i,q[r])) --r; q[++r]=i;
} printf("%lld",f[n]);
}