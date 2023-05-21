#pragma GCC optimize("O3")
#pragma GCC target("avx2")
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
const int modm = 1e9 + 7;
const int maxn = 4e5 + 5;
int n, m;
vector<vector<int>> gr;


pair<int, int> ans = {1, 1};

bool check(int k) {
    map<int, int> q;
    for (int i = 0; i < n; i++) {
        int st = 0;
        for (int j = 0; j < m; j++) {
            st += (1 << j) * (gr[i][j] >= k);
        }
        for (int s = 0; s < (1 << m); s++) {
            if ((st | s) == st) {
                if (!q.contains(s)) {
                    q[s] = (i + 1);
                }
            }
        }
    }
    for (auto [a, b]: q) {
        if (q.contains(a ^ ((1 << m) - 1))) {
            ans.first = b;
            ans.second = q[a ^ ((1 << m) - 1)];
            return true;
        }
    }
    return false;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    gr.assign(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> gr[i][j];
        }
    }
    int l = 0, r = 2 * 1e9;

    while (r - l > 1) {
        int mm = (r + l) / 2;
        if (check(mm)) {
            l = mm;
        } else {
            r = mm;
        }
    }
    cout << ans.first << " " << ans.second << "\n";

}