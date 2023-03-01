// // https://codeforces.com/problemset/problem/1073/A

#include <bits/stdc++.h>
using namespace std;
int main() {
   int n;
   cin>>n;
   string s;
   cin>>s;
    string ans = "";
   for(int i=1;i<s.size();i++){
       if(s[i]!=s[i-1]){
            cout<<"YES"<<endl;
           cout<<s[i-1]<<s[i]<<endl;
        //    ans = s[i-1] + s[i];
           return 0;
       }
   }
    cout<<"NO"<<endl;
}
