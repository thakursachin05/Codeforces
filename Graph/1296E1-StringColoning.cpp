#include "bits/stdc++.h"
using namespace std;

int n,p1=-1,p2=-1;
string a,ans;

int main()
{
	cin>>n>>a;
	for(auto c:a)
	{
		int v=c-'0';
		if(v>=p1) p1=v,ans+="0";
		else if(v>=p2) p2=v,ans+="1";
		else return 0 * printf("NO");
	}
	cout<<"YES\n"<<ans;
}