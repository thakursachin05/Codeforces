// https://codeforces.com/problemset/problem/1278/A

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        string p,h;
        cin>>p>>h;
        map<char,int> mp;
        for(auto it : p){
            mp[it]++;
        }
         bool flag = 0;
        for(int i=0;i<h.size();i++){
            map<char,int> mp1;
            for(int j=i;j<h.size();j++){
                mp1[h[j]]++;
                if(mp==mp1){
                    flag = 1;
                    break;
                }
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


}
