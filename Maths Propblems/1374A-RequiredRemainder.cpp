// https://codeforces.com/problemset/problem/1374/A

#include <bits/stdc++.h>
using namespace std;
int main() {
    // cout<<"Hello World!";
    int t;
    cin>>t;
    while(t--){
        long long x,y,z;
        cin>>x>>y>>z;
        long long k = z%x;
        if(k==y){
            cout<<z<<endl;
        }
        else{
            long long qo = z/x;
            long long ans = qo*x;
            if(ans+y <= z){
                cout<<ans+y<<endl;
            }
            else cout<<ans-x+y<<endl;
        }
 
    }
}
