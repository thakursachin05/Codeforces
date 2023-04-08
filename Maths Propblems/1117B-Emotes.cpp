// https://codeforces.com/problemset/problem/1117/B

#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n,m,k;
    cin>>n>>m>>k;
    long long arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    if(k>=m){
        cout<<m*arr[n-1]<<endl;
        return 0;
    }
    long p = m/(k+1);
    long q = m%(k+1);
    // cout<<p<<" "<<k<<" "<<q<<" "<<arr[n-1]<<" "<<arr[n-2]<<" "<<endl;
    cout<<(arr[n-1]*p*k) + (arr[n-2]*p) + (arr[n-1]*q)<<endl;
}
