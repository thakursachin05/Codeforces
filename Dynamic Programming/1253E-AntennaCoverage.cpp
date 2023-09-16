#include <bits/stdc++.h>
using namespace std;
int n, m, x[100], s[100], dp[100010];
int main() {
	scanf("%d%d", &n, &m);
	for(int i=0; i<n; i++) scanf("%d%d", x+i, s+i);
	for(int i=1; i<=m; i++) {
		dp[i] = 1 + dp[i-1];
		for(int j=0; j<n; j++) {
			int d = max(0, abs(i-x[j])-s[j]);
			int r = x[j]-s[j]-d-1;
			if (r >= 1) d += dp[r];
			dp[i] = min(dp[i], d);
		}
	}
	printf("%d", dp[m]);
}
