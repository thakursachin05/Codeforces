#include<bits/stdc++.h>
using namespace std;
int _,n,m,a,b,c,x,y,i,p[200001],q[200001],r[200001];
vector<int>v[200001];
deque<int>d;
long long ans,w[200001];
void solve(int x,int*a){
	for(int i=1;i<=n;i++)a[i]=1e9;
	a[x]=0;d.push_back(x);
	while(!d.empty()){
		x=d.front();d.pop_front();
		for(int i:v[x])if(a[i]>a[x]+1)a[i]=a[x]+1,d.push_back(i);
	}
}
int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	cin>>_;
	while(_--){
		cin>>n>>m>>a>>b>>c;ans=1e18;
		for(i=1;i<=m;i++)cin>>w[i];
		sort(w+1,w+m+1);
		for(i=1;i<=m;i++)w[i]+=w[i-1];
		for(i=1;i<=n;i++)v[i].clear();
		for(i=1;i<=m;i++)cin>>x>>y,v[x].push_back(y),v[y].push_back(x);
		solve(a,p);solve(b,q);solve(c,r);
		for(i=1;i<=n;i++){
			a=p[i];b=q[i];c=r[i];
			if(a+b+c<=m)ans=min(ans,w[a+b+c]+w[b]);
		}
		cout<<ans<<"\n";
	}
}