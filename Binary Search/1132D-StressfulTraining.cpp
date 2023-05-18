#include<bits/stdc++.h>
using namespace std;
#define DONTSYNC ios_base::sync_with_stdio(false);   cin.tie(NULL); cout.tie(NULL) //dont use stdio with iostream functions //input and output are out of order now!
#define TEST int T; cin>>T; while(T--)
#define endl "\n"
#define fori(a,start,end) for(int a=start;a<end;a++)
#define forl(a,start,end) for(long long a=start;a<end;a++)
#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
typedef long long     ll;
typedef long double   ld;
typedef pair<int,int> pii;
typedef pair<ll,ll>   pll;
typedef vector<int>   vi;
typedef vector<ll>    vl;
typedef vector<pii>   vii;
typedef vector<pll>   vll;
typedef vector<vi>    vvi;
typedef vector<vl>    vvl;
typedef unordered_map<ll,ll> umll;
typedef map<ll,ll> mll;
typedef unordered_set<ll> usll;
typedef set<ll> sll;
const double PI = acos(-1);

bool util(vl a,vl b,ll k,ll m){
    priority_queue<pll,vll,greater<>> Q;
    ll n=a.size();
    forl(i,0,n) Q.push({a[i]/b[i],i});
    forl(i,0,k-1){
        pll p=Q.top();
        Q.pop();
        a[p.se]+=m;
        Q.push({a[p.se]/b[p.se],p.se});
        if(Q.top().fi<=i) return false;
    }
    return true;
}

void solve(){
    ll n,k;
    cin>>n>>k;
    vl a(n),b(n);
    forl(i,0,n) cin>>a[i];
    forl(i,0,n) cin>>b[i];
    ll l=0,r=2e13,ans=-1;
    while(l<=r){
        ll m=(l+r)>>1;
        if(util(a,b,k,m)){
            ans=m;
            r=m-1;
        }
        else l=m+1;
    }
    cout<<ans<<endl;
}

int main()
{
    DONTSYNC;
    //TEST
    solve();
    return 0;
}