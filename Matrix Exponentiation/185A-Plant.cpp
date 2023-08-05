#include <iostream>

using namespace std;

int main(){
long long a=2,n,x,ans=1,mod=1e9+7;
cin>>n;
while(n){
if(n&1){
ans=(ans*a)%mod;
}a=(a*a)%mod;
n>>=1;
}
cout<<ans*(ans+1)/2%mod<<endl;

}

