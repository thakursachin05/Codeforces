// https://codeforces.com/contest/500/problem/A

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n,t;
  cin>>n>>t;
  int arr[n-1];
  for(int i=0;i<n-1;i++) cin>>arr[i];
  int starpos = 1;
  while(starpos < n && starpos!=t){
      starpos = starpos + arr[starpos-1];
  }
  if(starpos == t) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}
