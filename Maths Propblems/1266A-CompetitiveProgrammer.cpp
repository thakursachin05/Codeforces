// https://codeforces.com/problemset/problem/1266/A

#include <bits/stdc++.h>
using namespace std;
int main() {
    // cout<<"Hello World!";
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int flag = 0;
        int sum = 0;
        int even = 0;
        for(auto it: s){
            if(it=='0') flag = 1;
            int num = it-'0';
            if(num%2==0) even++;
            sum += num;
        }
        if(sum%3==0 && flag && even>1) cout<<"red"<<endl;
        else cout<<"cyan"<<endl;
    }
}
