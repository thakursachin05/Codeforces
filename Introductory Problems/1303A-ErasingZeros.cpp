// https://codeforces.com/problemset/problem/1303/A

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin>>t;
  while(t--){
      string s;
      cin>>s;
        int a = -1;
        int totalZero = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                if(i>0 && s[i-1]!='1' && a!=-1){
                    totalZero += i-a - 1;
                }
                    a = i;
            }
        }
        cout<<totalZero<<endl;
  }
}
