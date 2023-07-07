#include<bits/stdc++.h>
using namespace std;
int ans,n,m;
long long a[1001001],b[1001001],f[1001001];
int main()
{
cin>>n>>m;
for (int i=1;i<=n;i++)
cin>>a[i+m];
for (int i=1;i<=m;i++)
cin>>a[i];
if (m==1)
{
cout<<n<<endl;
return 0;
}
for (int i=1;i<n+m;i++)
b[i]=a[i+1]-a[i];
b[m]=INT_MAX;
for (int i=1;i<n+m;i++)
{
int t=f[i-1];
while(t!=0&&b[t+1]!=b[i]) t=f[t];
if (b[t+1]==b[i]&&t+1!=i) f[i]=t+1;
if (f[i]==m-1)ans++;
}
cout<<ans<<endl;
}
