// https://codeforces.com/problemset/problem/1/A

#include <bits/stdc++.h>
using namespace std;
int main() {
    // cout<<"Hello World!";
    long long n,m,a;
    cin>>n>>m>>a;
    long long l = n/a;
    long long b = m/a;
    if(n%a!=0){
        l++;
    }
    if(m%a!=0){
        b++;
    }
    cout<<l*b<<endl;
}
