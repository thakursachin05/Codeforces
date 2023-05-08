// https://codeforces.com/problemset/problem/630/D

#include <bits/stdc++.h>
using namespace std;
int main() {
    // cout<<"Hello World!";
    long long n;
    cin>>n;
    if(n==0) cout<<1<<endl;
    else{
        long long ans = n*(n+1)/2; 
        cout<<6*ans+1<<endl;
    }
}
