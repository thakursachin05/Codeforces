#include <iostream>
#include <algorithm>
using namespace std;
int i,n,k,T,M,A,a[102],c[306],s[306];
int main(){ 
 for(cin>>n>>T;k<n;k++)cin>>a[k],M=max(M,++c[a[k]]);
 for(;i<n*min(T,n*2);A=max(A,s[a[i++%n]]))
  for(k=a[i%n];k>=1;s[a[i%n]]=max(s[k--]+1,s[a[i%n]]));
 cout<<A+max((T-n*2)*M,0);
}