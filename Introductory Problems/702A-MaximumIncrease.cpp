// https://codeforces.com/problemset/problem/702/A

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;i++) cin>>arr[i];
    int maxLength = 0;
    int currLength = 0;
    int curr = 0;
    for(int i=1;i<=n;i++){
        if(curr < arr[i]){
            currLength++;
        }
        else{
            maxLength = max(maxLength,currLength);
            currLength = 1;
        }
        curr = arr[i];
    }
    cout<<max(maxLength,currLength)<<endl;
}
