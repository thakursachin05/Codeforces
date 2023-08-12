#include <bits/stdc++.h>
using namespace std;
#define rep(i,x) for (int i=0;i<x;++i)
const int Maxn=3e5+5;
multiset <int> p;
int a[Maxn],b[Maxn],n;
int main()
{
	cin>>n;
	rep(i,n)
	{
		cin>>a[i];
	}
	rep(i,n)
	{
		int t;
		cin>>t;
		p.insert(t);
	}
	rep(i,n)
	{
		int ms=0;
		for (int j=29;j>=0;j--)
		{
			ms|=a[i]&(1<<j);
			auto t=p.lower_bound(ms);
			if (t==p.end() || ((*t^ms)>>j))
			{
				ms^=1<<j;
			}
		}
		auto t=p.find(ms),tp=t;
		++tp;
		p.erase(t,tp);
		b[i]=a[i]^ms;
	}
	rep(i,n) cout<<b[i]<<" ";
	return 0;
}