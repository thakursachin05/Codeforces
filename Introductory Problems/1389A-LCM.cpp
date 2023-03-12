// https://codeforces.com/problemset/problem/1389/A

#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a*2 > b){
            cout<<-1<<" "<<-1<<endl;
            continue;
        }
        cout<<a<<" "<<2*a<<endl;
    }
}
