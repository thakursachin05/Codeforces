#include <bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
const int N = 200010;
void f(int n)
{
//	cout << n << endl;
	for (int i = 1; i <= n; i ++)
	{
		if (n % i == 0) cout << i << ' ';
	}
}
void solve()
{
	int n;
	cin >> n;
	vector<int> s(35);
	for (int i = 1; i <= n; i ++) 
	{
		int a;
		cin >> a;
		bitset<30> b(a);
		for (int i = 0; i < 30; i ++) s[i] += b[i];
	}
	int k = 0;
	for (int i = 0; i < 30; i ++)
	{
		k = __gcd(k, s[i]);
	}
	if (k == 0)
	{
		for (int i = 1; i <= n; i ++) cout << i << ' ';
	} 
	else f(k);
	cout << endl;
}
signed main()
{
 	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int t; cin >> t; while (t --)
	solve();
}


