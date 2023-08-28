#include <bits/stdc++.h>
using namespace std;
const int MAX=1e9+7;
int f[8];
int main(){
	int n;cin>>n;
	for(int i=0;i<8;++i)f[i]=MAX;f[0]=0;
	for(int i=1;i<=n;++i){
		int c,st=0;string s;
		cin>>c>>s;
		for(int j=0;j<s.size();++j)st|=1<<(s[j]-65);
		for(int j=0;j<8;++j)f[j|st]=min(f[j]+c,f[j|st]);
	}
	printf("%d\n",f[7]==MAX?-1:f[7]);
	return 0;
}
