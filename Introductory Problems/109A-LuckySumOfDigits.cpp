//  https://codeforces.com/problemset/problem/109/A

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a=-1;
    int i=0;
    int ans1,ans2;
    int curr = INT_MAX;
    for(;i<=n/7;i++){
        if((n-i*7)%4==0){
            a = (n-i*7)/4;
            if(curr > a+i){
                curr = a+i;
                ans1 = a;
                ans2 = i;
            }
        }
    }
    if(curr!=INT_MAX){ 
        while(ans1--) cout<<"4";
        while(ans2--) cout<<"7";
    }
    else cout<<-1<<endl;
}
