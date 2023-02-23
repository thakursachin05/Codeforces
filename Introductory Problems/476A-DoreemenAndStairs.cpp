// https://codeforces.com/problemset/problem/476/A

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int minMoves = n/2;
    if(n&1){
        minMoves++;
    }
    int x = minMoves/m;
    if(minMoves%m!=0){
        x++;
    }
    int num = x*m;
    if(m>n || num>n){
        cout<<-1<<endl;
        return 0;
    }
    if(n&1 || (num!=n-1) ){
        cout<<num<<endl;
    }
    else cout<<-1<<endl;
}
