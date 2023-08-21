#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define LD long double
#define endl '\n'
#define takearr(a,n) for(int i = 0; i<n; i++) cin>>a[i];
#define loop(n) for(int i = 1; i<=n; i++)
#define ull unsigned long long
const int N = 100010;
int inf = 1e9;
int mod = 1e9 + 7;

void solve()
{
   int n;
   cin>>n;
   int arr[n];
   takearr(arr,n);
   int ans[n] = {0};
   int p = arr[n-1];

   for(int i = n-1; i>=0; i--)
   {
      if(p!=0 ||arr[i]!=0)
      {
        ans[i] = 1;
        p = max(p,arr[i]);
        p--;
      }
      else{
        p = arr[i];
      }
   }
   for(int i = 0; i<n; i++)
   {
    cout<<ans[i]<<" ";
   }
   cout<<"\n";
}





signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T; cin >> T; while(T--)
    solve();  
}
