// https://codeforces.com/problemset/problem/515/A
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,b,c;
    cin>>a>>b>>c;
    if(c<abs(a)+abs(b)||(c-abs(a)-abs(b))%2) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}
