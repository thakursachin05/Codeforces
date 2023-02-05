// https://codeforces.com/problemset/problem/1097/A

#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    bool flag = false;
    for(int i=0;i<5;i++){
        string x;
        cin>>x;
        if(s[0] == x[0] || s[1] == x[1]){
            flag = true;
        }
    }

    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
