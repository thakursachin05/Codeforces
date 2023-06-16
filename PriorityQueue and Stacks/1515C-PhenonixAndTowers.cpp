#include<bits/stdc++.h>
using namespace std;
#define pa pair<int,int>
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int T;
cin>>T;
while(T--)
{
int n,m,x;
cin>>n>>m>>x;
priority_queue<pa>q;
for(int i=1;i<=m;i++)q.push({0,i});
cout<<"YES\n";
while(n--)
{
cin>>x;
auto t=q.top();q.pop();
t.first-=x;
cout<<t.second<<" ";
q.push(t);
}
cout<<"\n";
}
return 0;
}