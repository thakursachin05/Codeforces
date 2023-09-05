#include<iostream>
using namespace std;typedef long long ll;ll f(ll x){if(x<10)return x;ll r=x/10+9,f=x;while(f>9)f/=10;if(f>x%10)r--;return r;}int main(){ll l,r;cin>>l>>r;cout<<f(r)-f(l-1)<<endl;}
