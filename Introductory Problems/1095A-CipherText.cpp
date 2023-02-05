// https://codeforces.com/problemset/problem/1095/A

#include <bits/stdc++.h>
using namespace std;
int main() {
 int n;
 cin>>n;
 string s;
 cin>>s;
 string ans = "";
 int curr = 0;
 for(int i=0;i<n;i+=curr){
     ans += s[i];
     curr++;
 }
 cout<<ans<<endl;
}
