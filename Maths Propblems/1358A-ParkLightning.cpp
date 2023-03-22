// https://codeforces.com/problemset/problem/1358/A

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int k = n*m;
        int ans = 0;
        if(k&1){
            ans++;
        }
        ans += k/2;
        cout<<ans<<endl;
    }
}
