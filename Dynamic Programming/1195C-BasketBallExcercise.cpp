#include <bits/stdc++.h>
using namespace std;
int64_t n,i,l,h[179000][2],d[179000][2];
int main(){
	for(cin>>n;i<n+n;i++)cin>>h[1+i%n][i>=n];
	for(i=1;i<=n;i++)for(l=0;l<2;l++)
		d[i][l]=max(d[i-1][!l]+h[i][l],d[i-1][l]);
	cout<<max(d[n][0],d[n][1]);
}