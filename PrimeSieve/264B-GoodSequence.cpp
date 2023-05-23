#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector<int> arr(n+1),dp(n+1,0),v(100005,0);
    int ans=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        for(int j=1;j*j<=arr[i];j++){
            if(arr[i]%j == 0){
                dp[i]=max(dp[i],dp[v[arr[i]/j]]+1);
                if(j>1) dp[i]=max(dp[i],dp[v[j]]+1);
                ans=max(ans,dp[i]);
                v[j]=v[arr[i]/j]=i;
            }
        }
    }
    cout<<ans;
}