https://codeforces.com/problemset/problem/1139/B

#include <bits/stdc++.h>
using namespace std;
int main() {
   int n;
   cin>>n;
   long long arr[n];
   for(int i=0;i<n;i++) cin>>arr[i];
   
   long long ans = arr[n-1];
   long long lastEle = arr[n-1];
   for(int i=n-2;i>=0;i--){
       if(lastEle <= 0) break;
       if(arr[i] >= lastEle){
           ans += lastEle-1;
           lastEle--;
       }
       else{
           ans += arr[i];
           lastEle = arr[i];
       }
   }
   cout<<ans<<endl;
}
