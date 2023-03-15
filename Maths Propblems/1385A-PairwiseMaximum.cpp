// https://codeforces.com/problemset/problem/1385/A

#include <bits/stdc++.h>
using namespace std;
int main() {
    // cout<<"Hello World!";
    int t;
    cin>>t;
    while(t--){
        int arr[3];
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr,arr+3);
        if(arr[1]!=arr[2]){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        cout<<arr[0]<<" "<<arr[0]<<" "<<arr[2]<<endl;
    }
}
