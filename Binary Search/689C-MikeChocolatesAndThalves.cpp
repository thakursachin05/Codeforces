// https://codeforces.com/contest/689/problem/C
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
ll m;
bool check(ll x)
{
  // a a*k a*k*k a*k^3.
  // 1 , 2 ,3 ,4 ,.... 10^18/8.
  // 1*k^3<=n;
  // k<= cuberoot(n).  not optimal.

  //// a a*k a*k*k a*k^3.
  // k=2 , 3, 4 ,5 ,  cuberoot(10^18) , 10^6.

  // a:[1,2,3] k=[3].
  //  no of a possible values=3
  ll ways = 0;
  for (ll k = 2; k * k * k <= x; k++)
  {
    ll aMax = x / (k * k * k);
    ways += aMax;
  }
  return ways >= m;
}
void solve()
{
  cin >> m;

  ll lo = 8;
  ll hi = 1e18;
  ll ans = -1;
  while (lo <= hi)
  {
    ll mid = lo + (hi - lo) / 2;
    if (check(mid))
    {
      ans = mid;
      hi = mid - 1;
    }
    else
      lo = mid + 1;
  }
  if (ans != -1)
  {

    ll ways = 0;
    for (ll k = 2; k * k * k <= ans; k++)
    {
      ll aMax = ans / (k * k * k);
      ways += aMax;
    }
    if (ways == m)
    {
      cout << ans << endl;
    }
    else
      cout << -1 << endl;
  }
  else
    cout << -1 << endl;
}
int main()
{
  solve();
  return 0;
}