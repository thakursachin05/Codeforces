#include<bits/stdc++.h>
using namespace std;

int main(){
pair<long long,pair<long,long>>p[900000];
long long n;
cin>>n;
for(int i=0;i<n;i++)
{
cin>>p[i].second.first>>p[i].first>>p[i].second.second;
}
long long ans=0,res=0;
sort(p,p+n);
stack<long long>s;

for(int i=n-1;i>=0;i--)
{
while(!s.empty()&&p[i].first<=p[s.top()].second.first)
{
ans-=p[s.top()].second.second;
s.pop();
}
s.push(i);
ans+=p[s.top()].second.second;
res=max(res,ans);
}
cout<<res;

}