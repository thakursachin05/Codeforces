#include <iostream>
#include <cstring>
using namespace std;
long long w[1<<18][128],d=1;
char n[88];
int main(){
    int l,m,t,c[16]={0};
    cin>>n>>m;
    l=strlen(n),t=1<<l;
    w[0][0]=1;
    for(int i=0;i<l;++i)d*=++c[n[i]-='0'];
    for(int i=0;i<t;++i) for(int j=0;j<l;++j) if(!(i&1<<j)) if(i||n[j]) for(int k=0;k<m;++k) w[i|1<<j][(k*10+n[j])%m]+=w[i][k];
    cout<<w[t-1][0]/d<<endl;
}