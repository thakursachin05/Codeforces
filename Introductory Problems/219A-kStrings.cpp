// https://codeforces.com/contest/219/problem/A

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    string s;
    cin>>s;

    int n = s.size();
    if(n%t != 0 ){
        cout<<-1<<endl;
        return 0;
    }
    map<char,int> mp;
    for(auto it : s) mp[it]++;
    string res = "";
    for(auto it : mp){
        if(it.second % t != 0){
            cout<<-1<<endl;
            return 0;
        }
        for(int i=0;i<it.second/t;i++) res += it.first;
    }
    string ans = "";
    for(int i=0;i<t;i++) ans += res;
    cout<<ans<<endl;
}
