// https://codeforces.com/problemset/problem/507/A

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n,k;
  cin>>n>>k;
  vector<pair<int,int>> arr(n);
 
  
  for(int i=0;i<n;i++){
       cin>>arr[i].first;
        arr[i].second = i;   
    }
    vector<int> ans;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        k -= arr[i].first;
        if(k<0){
            break;
        }
        else {
           ans.push_back(arr[i].second+1);
        }
    }
    if(!ans.size()) cout<<0;
    else{
        cout<<ans.size()<<endl;
        for(auto it : ans) cout<<it<<" ";
    }

}
