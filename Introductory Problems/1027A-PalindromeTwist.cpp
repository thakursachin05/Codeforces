// https://codeforces.com/problemset/problem/1027/A

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
       int i=0,j=n-1;
       int flag = 1;
       while(i<j){
           if(s[i]!=s[j] && (abs(s[i]-s[j])!=2)){
               flag=0;
               break;
           }
           i++;
           j--;
       }
       if(flag) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
        
    }

}
