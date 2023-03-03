// https://codeforces.com/problemset/problem/1199/A
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,a,b;
    cin>>n>>a>>b;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int ans = -1;
    for(int i=0;i<n;i++){
        int flag = 1;
        for(int j=i;j>=i-a && j>=0;j--){
            if(arr[j] < arr[i]){
                // cout<<arr[i]<<" a"<<endl;
                flag = 0;
                break;
            }
        }
        if(flag){
             for(int k=i;k<=i+b && k<n;k++){
                if(arr[k] < arr[i]){
                    // cout<<arr[i]<<" b"<<endl;
                    flag = 0;
                    break;
                }
             }  
        }

        if(flag){
            ans = i+1;
            break;
        }
    }

    cout<<ans<<endl;
}
