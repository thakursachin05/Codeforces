// https://codeforces.com/problemset/problem/1195/A

#include <bits/stdc++.h>
using namespace std;
int main() {
    // cout<<"Hello World!";
    int n,k;
    cin>>n>>k;
    vector<int> arr(k+1,0);
    int count = 0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[x]++;
        // cin>>arr[i];
    }

    for(auto x : arr){
        count += x/2;
        if(x&1){
            count++;
        }
    }
    int s = n/2;
    if(n&1) s++;
    cout<<n-(count-s)<<endl;


    
}
