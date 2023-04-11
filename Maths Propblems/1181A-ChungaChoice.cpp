// https://codeforces.com/problemset/problem/1181/A

#include <bits/stdc++.h>
using namespace std;
int main() {
    // cout<<"Hello World!";
    long long a,b,c;
    cin>>a>>b>>c;
    if(a%c==0 || b%c==0 || ((a+b)/c) == (a/c + b/c)){
        cout<<(a+b)/c<<" "<<0<<endl;
    }
    else{
        cout<<(a+b)/c<<" "<<min(c-min(a%c,b%c),c-max(a%c,b%c))<<endl;
    }
}