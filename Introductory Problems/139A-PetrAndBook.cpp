// https://codeforces.com/contest/139/problem/A

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[7];
    int sum = 0;
    for(int i=0;i<7;i++){
        cin>>arr[i];
        sum += arr[i];
    }
    if(n > sum) n = n%(sum);
    int ans = 1;
    if(n==0){
        for(int i=6;i>=0;i--){
            if(arr[i]!=0){
                ans = i+1;
                break;
            }
        }
    }
    else{
        for(int i=0;i<7;i++){
            if(n <= arr[i]){
                ans = i+1;
                break;
            }
            n -= arr[i];
        }
    }
    cout<<ans<<endl;
    
}
