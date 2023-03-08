// https://codeforces.com/problemset/problem/1133/A

#include <bits/stdc++.h>
using namespace std;
int main() {
    string t1,t2;
    cin>>t1>>t2;

    int m1 = ((t1[0]-'0')*10+(t1[1]-'0'))*60 + (t1[3]-'0')*10+(t1[4]-'0');
    int m2 = ((t2[0]-'0')*10+(t2[1]-'0'))*60 + (t2[3]-'0')*10+(t2[4]-'0');
    int ans = (m1+m2)/2;
    if(ans/60 < 10){
        cout<<0;
    }
    cout<<ans/60<<":";
    if(ans%60 < 10){
            cout<<0;
        }
    cout<<ans%60<<endl;
}
