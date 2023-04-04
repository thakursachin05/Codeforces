// https://codeforces.com/problemset/problem/1335/A

#include <bits/stdc++.h>
using namespace std;
int main() {
    // cout<<"Hello World!";
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n&1){
            cout<<n/2<<endl;
        }
        else cout<<n/2 - 1<<endl;
    }
}
