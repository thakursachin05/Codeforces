#include<iostream>
using namespace std;int n,a,c,x,m,r=-1;main(){for(cin>>n;n--;)cin>>a,c+=a,x+=1-a*2,r=max(r,x-m),m=min(x,m);cout<<r+c;}