

#include<bits/stdc++.h>
using namespace std;

int a[100001],dp[100001],n,i,j;

main()
{
for (cin>>n; cin>>n;)
{
for (i=1;i<=n;i++)
cin>>a[i],dp[i]=1;
for (i=1;i<=n;i++)
for(j=i+i;j<=n;j+=i)
if(a[j]>a[i])
dp[j]=max(dp[i]+1,dp[j]);
cout <<*max_element(dp+1,dp+n+1) << '\n';
}
}