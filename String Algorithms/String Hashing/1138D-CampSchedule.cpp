#include<bits/stdc++.h>
using namespace std;
const int maxn=500005;
int n,m,T,ans,flg;
int p[maxn],cnt[2];
string s,t;
int main(){
cin>>s>>t,n=s.size(),m=t.size();
for(int i=0;i<n;i++)
cnt[s[i]-48]++;
p[0]=0;
for(int i=1;i<m;i++){
int j=p[i-1];
while(j>0&&t[i]!=t[j])
j=p[j-1];
if(t[i]==t[j])
j++;
p[i]=j;
}
for(int i=0,j=0;i<n;i++){
int k=(cnt[t[j]-48]==0? (t[j]^1):t[j])-48;
cnt[k]--,printf("%d",k);
j++;
if(j==m)
j=p[j-1];
}
return 0;
}