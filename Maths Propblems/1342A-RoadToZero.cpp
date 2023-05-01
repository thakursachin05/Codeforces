// https://codeforces.com/problemset/problem/1342/A

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        if(2*c > d){
            long long x = min(a,b);
            cout<<d*x+c*(max(a,b)-x)<<endl;
        }
        else{
            cout<<(a+b)*c<<endl;
        }
    }
}
