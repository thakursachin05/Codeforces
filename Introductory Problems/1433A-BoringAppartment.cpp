// https://codeforces.com/problemset/problem/1433/A

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin>>t;
  while(t--){
      string s;
      cin>>s;
      int r = s[0]-'0';
      int c = s.size();
      int rowSum = 10;
      int ans = rowSum*(r-1) + (c*(c+1))/2;
      cout<<ans<<endl;
  }
}
