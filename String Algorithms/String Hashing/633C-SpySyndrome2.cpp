#include <bits/stdc++.h>
using namespace std;
map <string, string> mp;
vector <string> v;
int n,m;
string s;
int solve(int x) {
	if(x==n) return 1;
	string t="";
	for(int i=x;i<n;++i) {
		t+=s[i];
		if(mp.find(t)!=mp.end()) {
			v.push_back(mp[t]);
			if(solve(i+1)) return 1;
			else v.pop_back();
		}
	}
	return 0;
}
main() {
    ios::sync_with_stdio(0);
	cin>>n>>s>>m;
	while(m--) {
	    string x,t;
		cin>>t; x=t;
		reverse(x.begin(),x.end());
		transform(x.begin(),x.end(),x.begin(),::tolower);
		mp[x]=t;
	}
	solve(0);
	for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
}
