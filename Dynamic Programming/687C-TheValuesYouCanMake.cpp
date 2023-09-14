#include<bits/stdc++.h>
using namespace std;
int n,k,x;
bitset<512>B[512];
main()
{
	for(cin>>n>>k,B[0][0]=1;cin>>x;)
	for(int i=k;i>=x;i--)
	B[i]=(B[i-x]<<x)|B[i]|B[i-x];
	cout<<B[k].count()<<endl;
	for(int i=0;i<=k;i++)
	if(B[k][i])
	cout<<i<<" ";
}
