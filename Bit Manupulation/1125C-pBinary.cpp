#include <iostream>
int main(){
    int n,p,i=1;
    scanf("%d%d",&n,&p);
    for(;i<=30;++i)if(n-i*p>=i&&__builtin_popcount(n-i*p)<=i)return 0*printf("%d\n",i);
    return 0*printf("-1");
}11