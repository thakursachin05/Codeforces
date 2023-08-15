#include<bits/stdc++.h>
using namespace std;
int n,i,j,k;
map<string,int> P;
string s[70179];
int main(){
ios_base::sync_with_stdio(0);cin.tie(0);
for(cin>>n,i=1;i<=n;i++)
	for(cin>>s[i],k=1;k<=9;k++)
		for(j=0;j+k<=9;j++){
			int &w=P[s[i].substr(j,k)];
			w=w==0||w==i?i:-1;
		}
for(auto &p:P){
	i=p.second;
	if(i>0&&s[i].size()>p.first.size())s[i]=p.first;
	}
for(i=1;i<=n;i++)cout<<s[i]<<'\n';
}