#include<iostream>
using namespace std;
int i,j=1,a[5001],f[5001][5001];
int main(){
    for(cin>>i;j<=i;j++) cin>>a[j];
    for(;i;i--) for(j=0;j<i;j++) f[i-1][j]=a[j]<a[i]?min(f[i][j]+1,f[i][i]+a[i]-a[j]):f[i][i];
    cout<<**f;
    return 0;
}