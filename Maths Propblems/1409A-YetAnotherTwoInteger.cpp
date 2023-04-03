// https://codeforces.com/problemset/problem/1409/A

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int k = abs(b-a);
        if(k==0){
            cout<<0<<endl;
            continue;
        }
        if(k%10==0){
            cout<<k/10<<endl;
    
        }
        else{
            cout<<k/10 + 1<<endl;
        }
    }
}
