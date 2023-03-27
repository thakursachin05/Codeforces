// https://codeforces.com/problemset/problem/1360/A

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int x = min(a,b);
        x *= 2;
        cout<<max({x,a,b})*max({a,b,x})<<endl;
    }
}
