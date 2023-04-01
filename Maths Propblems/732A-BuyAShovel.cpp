// https://codeforces.com/problemset/problem/732/A

#include <bits/stdc++.h>
using namespace std;
int main() {
    // cout<<"Hello World!";
    int t = 1;
    // cin>>t;
    while(t--){
        int n,r;
        cin>>n>>r;
        for(int i=1;i<10;i++){
            int k = i*n;
            if(k%10==r || k%10==0){
                cout<<i<<endl;
                break;
            }
        }
    }
}
