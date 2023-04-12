//  https://codeforces.com/problemset/problem/1154/A

#include <bits/stdc++.h>
using namespace std;
int main() {
    // cout<<"Hello World!";
    int arr[4];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
    sort(arr,arr+4);
    cout<<arr[0]+arr[1]-arr[3]<<" "<<arr[0]+arr[2]-arr[3]<<" "<<arr[1] + arr[2] - arr[3]<<endl;

}
