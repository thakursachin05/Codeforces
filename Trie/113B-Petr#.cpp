#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
int x[5005],y[5005];
unordered_set<long long> v;
int main()
{
	string s,a,b;
	cin>>s>>a>>b;
	int ls=s.size(),la=a.size(),lb=b.size();
	for(int i=0;i<ls;i++)
	{
		if(s.substr(i,la)==a)x[i]=1;
		if(s.substr(i,lb)==b)y[i+lb-1]=1;
	}
	long long t;
	for(int i=0;i<ls;i++)
	{
		if(x[i])
		{
			t=0;
			for(int j=i;j<ls;j++)
			{
				t=t*3517+s[j];
				if(y[j]&&j-i+1>=max(la,lb))v.insert(t);
			}
		}
	}
	cout<<v.size()<<endl;
}