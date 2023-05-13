// https://codeforces.com/problemset/problem/1613/C 
#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int a[100002];
signed main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		vector<int> v;
		for(int i=0;i<n;i++)
			cin>>a[i];
		int l=0,r=0;
		// v.push_back(0);
		// v.push_back(m+1);
		for(int i=0;i<n;i++)
		{
			if(a[i]==-1)
				l++;
			else if(a[i]==-2)
				r++;
			else
			{
				v.push_back(a[i]);
			}
		}

		sort(v.begin(),v.end());
		vector<int>::iterator ip;
		ip = unique(v.begin(), v.end());
   
   		v.resize(distance(v.begin(), ip));
  
		int size=v.size();
		int maxpro=0;
		for(int i=0;i<size;i++)
		{
			int k=size-i-1;
			int x=min(l,(v[i]-1-i))+min(r,(m-v[i]-k));
			if(maxpro<x)
				maxpro=x;
		}
		int lx=min(l+size,m);
		int rx=min(r+size,m);
		// cout<<lx<<" "<<rx<<"\n";
		int xx= max(lx,rx);
		cout<<max(xx,maxpro+size)<<"\n";
	}
}