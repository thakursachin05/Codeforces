// https://codeforces.com/problemset/problem/1430/C

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<2<<endl;
        if(n==2){
            cout<<n-1<<" "<<n<<endl;
            continue;
        }
        cout<<n<<" "<<n-2<<endl;
        int arr[n-1];
        for(int i=0;i<n-1;i++) arr[i] = i+1;
        int j = n-2;
        arr[j-1] = n - 1;
        while(j>=1){
            cout<<arr[j]<<" "<<arr[j-1]<<endl;
            arr[j-1] = (arr[j] + arr[j-1])/2;
            j--;
        }
    }
}