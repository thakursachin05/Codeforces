#include <bits/stdc++.h>
using namespace std;
vector<long long int> a;
void func(long long int x, int c)
{
int i;
if (x>1e18 or c>3) return;
a.push_back(x);
for(i=0; i<10; ++i) if (x*10+i>0) func(x*10+i, c+!!i);
}

int main()
{
func(0, 0);
sort(begin(a), end(a));
long long int T; cin>>T;
while (T--) {
long long int L, R; cin>>L>>R;
cout<<upper_bound(begin(a), end(a), R)-lower_bound(begin(a), end(a), L)<<endl;
}
}
