// https://codeforces.com/contest/1266/problem/B
#include <bits/stdc++.h>
using namespace std;
int main() {
    // cout<<"Hello World!";
    int t;
    cin>>t;
    while(t--){
        long long x;
        cin>>x;
 
        long long d = x%14;
        long long to = x/14;
        if(to >= 1 && d>=1 && d <=6){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;

    }
}