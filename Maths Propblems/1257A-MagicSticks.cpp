// https://codeforces.com/problemset/problem/1257/B

#include <bits/stdc++.h>
using namespace std;
int main() {
    // cout<<"Hello World!";
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x>3){
            cout<<"YES"<<endl;
            continue;
        }        
    if( (x==1 && y==1 ) || ((x==2 || x==3 ) && y<4)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
}
