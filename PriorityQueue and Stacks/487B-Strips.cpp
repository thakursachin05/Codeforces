#include<bits/stdc++.h>
#define N 100005
#define INF 1900000000
using namespace std;
int n,s,l,a[N],dp[N],now=1;
multiset<int> v,q;
int main(){
scanf("%d%d%d",&n,&s,&l);
for(int i=1;i<=n;i++){
scanf("%d",&a[i]);
}
for(int i=1;i<=n;i++){
dp[i]=INF;
v.insert(a[i]);
if(i-now+1>=l)q.insert(dp[i-l]);
while(*v.rbegin()-*v.begin()>s){
v.erase(v.find(a[now]));
auto it=q.find(dp[now-1]);
if(it!=q.end())q.erase(it);
now++;
}
if(!q.empty())dp[i]=*q.begin()+1;
}
if(dp[n]>=INF)printf("-1");
else printf("%d",dp[n]);
return 0;
}