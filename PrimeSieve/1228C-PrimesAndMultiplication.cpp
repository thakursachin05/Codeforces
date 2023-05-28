#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rep_r(i,a,b) for(int i=a;i>=b;i--)
#define each(a,x) for (auto& x : a)
using pi = pair<int,int>;
using pl = pair<ll,ll>;
using vi = vector<int>;
using vl = vector<ll>;
#define fi first    
#define se second
#define sz(x) int(x.size())
#define so(x) sort(all(x))
#define so_r(x) sort(all(x),greater<int>())
#define zero(x) memset(x,0,sizeof(x))
#define pb push_back
#define lb lower_bound
#define ub upper_bound
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int bit_cnt(int x){
    return __builtin_popcount(x);
}
ll bex(ll a, ll b, ll mod = 1){ll res = 1LL; while(b){ if (b&1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}
template<class t,class u> bool chmax(t&a,u b){if(a<b){a=b;return true;}else return false;}
template<class t,class u> bool chmin(t&a,u b){if(b<a){a=b;return true;}else return false;}

const int MOD = 1e9 + 7; // 998244353
const int N = 1e5 + 5;
const ll INF = 1e18;

void solve(){
   ll mx = INF;
   ll x,n; cin >> x >> n;
   vl pr;
   for (ll i = 2LL; i * i <= x; i++){
      if (x % i == 0) pr.pb(i);
      while (x % i == 0) x /= i;
   }
   if (x > 1) pr.pb(x);
   ll res = 1LL;
   each(pr,v){
      ll cnt = 0;
      ll cur = v;
      while (n >= cur){
         cnt += n / cur;
         if (cur >= mx / v) break;
         cur *= v;
      }
      res = res * bex(v,cnt,MOD) % MOD;
   }
   cout << res;
}

int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;// cin >> t;
    while (t--){
        solve();
    }
}