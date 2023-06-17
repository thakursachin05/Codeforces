#include<bits/stdc++.h>
using namespace std;
const int MAX=1e5+9;
int a[MAX],st[MAX],t,n,f[MAX],ans;
int main()
{
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
		while (t && a[st[t-1]]<a[i]) f[i]=max(f[i],f[st[t-1]]),t--;
		if (!t) f[i]=1e9;
		else ans=max(ans,++f[i]);
		st[t++]=i;
	}
	cout<<ans;
}
