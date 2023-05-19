// 
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

void solve(){
    ll n,t;
    cin>>n>>t;
    vll a(n);
    forl(i,0,n) cin>>a[i].se;
    forl(i,0,n) cin>>a[i].fi;
    ll cs=0,ct=0;
    sort(all(a));
    forl(i,0,n){
        cs+=a[i].se;
        ct+=a[i].fi*a[i].se;
    }
    ll i=-1;
    if(ct>t*cs){
        i=n-1;
        for(;i>=0 && ct>t*cs;i--){
            cs-=a[i].se;
            ct-=a[i].fi*a[i].se;
        }
        i++;
        if(i==0){
            cout<<0<<endl;
            return;
        }
    }
    else if(ct<t*cs){
        i=0;
        for(;i<n && ct<t*cs;i++){
            cs-=a[i].se;
            ct-=a[i].fi*a[i].se;
        }
        i++;
        if(i==0){
            cout<<0<<endl;
            return;
        }
    }
    cout<<fixed<<setprecision(12)<<cs+((i==-1 || a[i].fi==t)?0:(double)(cs*t-ct)/(a[i].fi-t))<<endl;
}


int main()
{
    DONTSYNC;
    //TEST
    solve();
    return 0;
}