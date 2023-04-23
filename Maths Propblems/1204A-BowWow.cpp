// https://codeforces.com/problemset/problem/1204/A
#include <bits/stdc++.h>
using namespace std;
int main() {
    // cout<<"Hello World!";
    string s;
    cin>>s;
    int i=0;
    int k = 1;
    int count = 0;
    int flag = 0;
    for(auto x : s){
        if(x=='1'){
            flag++;
        }
    }
    while(i<s.size()){
        count++;
        i += 2;
        // k*=2;
    }
    // cout<<s.size()<<endl;
    if(s.size()%2!=0 && flag < 2){
        count--;
    }
    cout<<count<<endl;
}
