// https://codeforces.com/problemset/problem/69/A
#include <bits/stdc++.h>
using namespace std;
int main() {
    // cout<<"Hello World!";
    int n;
    cin>>n;
    int arr[n+1][3];
    for(int i=0;i<n;i++){
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    }
    arr[n][0] = arr[n][1] = arr[n][2] = 0;
    for(int j=0;j<3;j++){
        for(int i=0;i<n;i++){
            arr[n][j] += arr[i][j];
        }
    }

    if(arr[n][0] == arr[n][1] && arr[n][1] == arr[n][2] && arr[n][0] ==0 ){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    cout<<arr[n][0]<<" "<<arr[n][1]<<" "<<arr[n][2]<<endl;
}
