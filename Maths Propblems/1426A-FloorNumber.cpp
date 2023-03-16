// https://codeforces.com/problemset/problem/1426/A

#include <iostream>
using namespace std;
int main() {
    int t = 1;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        if(n<=2){
            cout<<1<<endl;
            continue;
        }
        n -= 2;
        if(n%x==0){
            cout<<n/x + 1<<endl;
        }
        else cout<< n/x + 2<<endl;
    }
}
