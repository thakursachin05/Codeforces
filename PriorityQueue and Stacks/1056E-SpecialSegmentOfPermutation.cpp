#include <iostream>
#include <set>
using namespace std;
int main() 
{
	int n,a[200005],i,j,ans=0;
	cin>>n;
	for(i=0;i<n;i++) cin>>a[i];
	for(i=1;i<n-1;i++)
	{
		if(a[i]<a[i-1]||a[i]<a[i+1]) continue;
		set<int> left;
		for(j=i-1;j>=0&&a[j]<a[i];j--) left.insert(a[j]);
		for(j=i+1;j<n&&a[j]<a[i];j++) if(left.find(a[i]-a[j])!=left.end()) ans++;
	}
	cout<<ans<<endl;
}