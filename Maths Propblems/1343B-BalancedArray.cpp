// https://codeforces.com/problemset/problem/1343/B

#include <bits/stdc++.h>
using namespace std;
int main() {
    // cout<<"Hello World!";
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n<4 || n%4!=0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            long sum = 0;
            for(int i=0;i<n/2;i++){
                cout<<2*(i+1)<<" ";
                sum += 2*(i+1);
            }
           
            for(int i=1;i<n/2;i++){
                cout<<2*i-1<<" ";
                sum -= (2*i - 1);
            }

            cout<<sum<<endl;
        }
    }
}
