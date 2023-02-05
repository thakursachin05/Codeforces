// https://codeforces.com/problemset/problem/1391/B

#include <bits/stdc++.h>
using namespace std;
int main() {
 int t;
 cin>>t;
 while(t--){
     int n,m;
     cin>>n>>m;
    vector<string> arr;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        arr.push_back(s);
    }
    int a=0,b=0;
    for(int i=0;i<n;i++){
        if(arr[i][m-1]=='R') a++;
    }
    for(int j=0;j<m;j++){
        if(arr[n-1][j]=='D') b++;
    }
    cout<<a+b<<endl;
 }
}
