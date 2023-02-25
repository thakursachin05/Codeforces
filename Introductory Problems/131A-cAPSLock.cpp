// https://codeforces.com/problemset/problem/131/A

#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    int flag = 0;
    int flag2 = 1;
    if(s[0] >= 'a' && s[0] <= 'z'){
            flag = 1;
    }
    for(int i=1;i<s.size();i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            flag2 = 0;
            break;
        }
    }
    if(flag2 == 0){
        cout<<s<<endl;
        return 0;     
    }
    if(flag){
        s[0] -= 32;
    }
    else s[0] += 32;
    for(int i=1;i<s.size();i++){
        s[i] += 32;
    }
    cout<<s<<endl;
}
