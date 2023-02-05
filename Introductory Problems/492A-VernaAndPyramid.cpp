// https://codeforces.com/problemset/problem/492/A

#include <bits/stdc++.h>
using namespace std;
int main() {
   int n;
   cin>>n;
   long long sum = 0;
   long i = 1;
   for(;i<=n;i++){
       long curr = (i*(i+1))/2;
        sum += curr;
       if(sum == n){
           cout<<i<<endl;
           break;
       }
       else if(sum > n){
           cout<<i-1<<endl;
           break;
       }
   }
}
