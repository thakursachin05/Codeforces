// https://codeforces.com/problemset/problem/1294/A

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        int k = a+b+c+d;
        if(k%3!=0){
            cout<<"NO"<<endl;
            continue;
        }
        k = k/3;
        if(a > k || b > k || c > k){
            cout<<"NO"<<endl;
            continue;
        }
        int p = 3*k-a-b-c;
        if(p == d){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;

    }
}
