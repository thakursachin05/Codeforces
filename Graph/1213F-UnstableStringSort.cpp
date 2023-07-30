#include<bits/stdc++.h>
using namespace std;
int n,k,x,a[1<<20],p[1<<20],b[1<<20],u,A[1<<20],C=1;
main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++)
		cin>>a[i],p[a[i]]=i;
	for(int i=1;i<=n;i++)
		cin>>x,b[i]=p[x];
	for(int i=1;i<=n;i++)
		u=max(u,b[i]),A[a[i]]=C,C+=u==i&&i<n;
	if(C<k)
		cout<<"NO",exit(0);
	cout<<"YES\n";
	for(int i=1;i<=n;i++)
		cout<<char(min(k,A[i])+'a'-1);
}
	  			    	  		 			 			 	 	   	