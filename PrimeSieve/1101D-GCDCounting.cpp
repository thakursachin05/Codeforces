#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 7;
int n, a[N], ans[N], max_p[N];
vector<int> ad[N];
vector<pair<int, int>> p[N];

void input() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n - 1; i++) {
		int u, v;
		cin >> u >> v;
		u--, v--;
		ad[u].push_back(v);
		ad[v].push_back(u);
	}
}

void prepare(int x, int u) {
	for (int i = 2; i * i <= x; i++)
		if (x % i == 0) {
			p[u].push_back({i, max_p[i] + 1});
			while (x % i == 0)
				x /= i;
		}
	if (x > 1)
		p[u].push_back({x, max_p[x] + 1});
}

void dfs_for_dir(int u, int par) {
	for (int v: ad[u])
		if (v != par)
			dfs_for_dir(v, u);
	for (int v: ad[u])
		if (v != par) 
			for (auto [x, cnt]: p[v])
				max_p[x] = max(max_p[x], cnt);
	prepare(a[u], u);
	for (int v: ad[u])
		if (v != par) 
			for (auto [x, _]: p[v])
				max_p[x] = 0; 
}

void dfs_for_ans(int u, int par) {
	ans[u] = (a[u] > 1);
	vector<pair<int, int>> prime;
	for (int v: ad[u])
		if (v != par) 
			for (auto [x, cnt]: p[v])
				prime.push_back({x, cnt});
	sort(prime.begin(), prime.end());
	for (int i = 0; i < (int) prime.size(); i++) {
		int x = prime[i].first, cnt = prime[i].second;
		if (a[u] % x == 0) {
			if (i - 1 >= 0 && prime[i - 1].first == x)
				ans[u] = max(ans[u], prime[i - 1].second + cnt + 1);
			else 
				ans[u] = max(ans[u], cnt + 1);
		}
	}
	for (int v: ad[u])
		if (v != par)
			dfs_for_ans(v, u);
}

int main() {
	ios:: sync_with_stdio(false), cin.tie(0), cout.tie(0);
	input();
	dfs_for_dir(0, -1);
	dfs_for_ans(0, -1);
	cout << *max_element(ans, ans + n);
}
