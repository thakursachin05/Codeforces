#include<bits/stdc++.h>
using namespace std;
#define int long long
struct U{
	int a[9][9];
}w;
int n,a,b,c,d,O=1e9+7;
U T(U x,U y){
	U z;
	memset(z.a,0,sizeof z.a);
	for(int i=1;i<=3;i++)
		for(int j=1;j<=3;j++)
			for(int k=1;k<=3;k++)
				(z.a[i][j]+=x.a[i][k]*y.a[k][j])%=(O-1);
	return z;
}
U Q(U x,int y){
	U z;
	memset(z.a,0,sizeof z.a);
	for(int i=1;i<=3;i++)
		z.a[i][i]=1;
	for(;y;y/=2,x=T(x,x))
		if(y&1)
			z=T(z,x);
	return z;
}
int P(int x,int y){
	int z=1;
	for(;y;y/=2,x=x*x%O)
		if(y&1)
			z=z*x%O;
	return z;
}
main(){
	cin>>n>>a>>b>>c>>d,a=a*d%O,b=b*d%O*d%O,c=c*d%O*d%O*d%O,w.a[1][1]=w.a[1][2]=w.a[1][3]=w.a[2][1]=w.a[3][2]=1,w=Q(w,n-3);
	cout<<P(c,w.a[1][1])*P(b,w.a[1][2])%O*P(a,w.a[1][3])%O*P(P(d,n),O-2)%O;
}
		    	  	 	 			 	  				  		 		