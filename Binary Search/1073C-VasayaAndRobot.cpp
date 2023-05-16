#include <bits/stdc++.h>
#define IOS   ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define xs(a) cout<<setiosflags(ios::fixed)<<setprecision(a);
#define lbit(a) (__builtin_ffsll(a))
#define ubit(a) (64-__builtin_clzll(a))
#define popcount(a) __builtin_popcountll(a)
//lowbit -> 10100??100(???) lbit ->?????1???(???)  ubit ->?????1???
//__builtin_popcountll(x)?????1???
#define FOR(i, a, b) for (ll (i) = (a); (i) <= (b); (i)++)
#define ROF(i, a, b) for (ll (i) = (a); (i) >= (b); (i)--)
#define mem(a,b) memset(a,b,sizeof(a));
using namespace std;
#define ull unsigned long long
#define ll long long
#define endl '\n'
typedef pair<ll,ll> pll;
const int N=1e6+5;
const int mod=1e9+7;
/*-----------------------------------------------------------------------------------------------*/

ll sufx[N],sufy[N];
signed main(){IOS
	int n;cin>>n;
	string s;cin>>s;s=" "+s;
	int x,y;cin>>x>>y;
	if(abs(x)+abs(y)>n){
		cout<<-1<<endl;
		return 0;
	}
	if(x<0)
		FOR(i,1,n){
			if(s[i]=='L')s[i]='R';
			else if(s[i]=='R')s[i]='L';
		}
	if(y<0)
		FOR(i,1,n){
			if(s[i]=='U')s[i]='D';
			else if(s[i]=='D')s[i]='U';
		}

	x=abs(x),y=abs(y);
	if((x+y)%2 != n%2){
		cout<<-1<<endl;
		return 0;
	}

	ROF(i,n,1){
		sufx[i]=sufx[i+1];
		sufy[i]=sufy[i+1];
		if(s[i]=='L')sufx[i]--;
		if(s[i]=='R')sufx[i]++;
		if(s[i]=='U')sufy[i]++;
		if(s[i]=='D')sufy[i]--;
	}
	

	int tx=0,ty=0;
	ll res = n;
	FOR(i,0,n){
		if(s[i]=='L')tx--;
		if(s[i]=='R')tx++;
		if(s[i]=='U')ty++;
		if(s[i]=='D')ty--;
		int l=i+1,r=n;
		while(l<=r){
			int mid = l+r>>1;
			int fx = tx + sufx[mid+1];
			int fy = ty + sufy[mid+1];
			int delt = abs(x-fx) + abs(y-fy);
			if(mid-i>=delt)r=mid-1,res = min(res,mid-i);
			else l=mid+1;
			// if(res==2)cout<<i<<endl;
		}
	}
	if(tx==x&&ty==y)res=0;

	cout<<res<<endl;

	return 0;
}