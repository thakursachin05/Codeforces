// https://codeforces.com/problemset/problem/610/A

#include <bits/stdc++.h>
using namespace std;
int main() {
    // cout<<"Hello World!";
    int t = 1;
    // cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2!=0){
            cout<<0<<endl;
            continue;
        }
        if(n%4==0){
            cout<<(n/4 - 1)<<endl; 
        }
        else cout<<n/4<<endl;
    }
}
