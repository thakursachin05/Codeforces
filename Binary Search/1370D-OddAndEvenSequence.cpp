#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; ++i) cin >> a[i];
    ll l = -1, r = 1e10;
    while (r - l > 1) {
        ll m = (l + r) / 2;
        vector<ll> p;
        for (ll i = 0; i < n; ++i) {
            if (a[i] <= m) p.push_back(i);
        }
        ll a = k - k / 2, b = k / 2;
        for (ll i = 0, lst = -2; i < (ll)p.size(); ++i) {
            if (p[i] > lst + 1 && (p[i] != n - 1 || k % 2)) --a, lst = p[i];
        }
        for (ll i = 0, lst = -1; i < (ll)p.size(); ++i) {
            if (p[i] > lst + 1 && (p[i] != n - 1 || k % 2 == 0)) --b, lst = p[i];
        }
        if (a <= 0 || b <= 0) r = m;
        else l = m;
    }
    cout << r;
}