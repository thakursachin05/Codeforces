// https://codeforces.com/problemset/problem/1463/A

#include <bits/stdc++.h>
using namespace std;
int main() {
    // cout<<"Hello World!";
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if ((a + b + c) % 9 != 0)
		    cout<<"NO"<<endl;
	    else{
            if(min({a,b,c}) >= (a+b+c)/9){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
    }
}
