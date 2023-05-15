#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const int N = 3 * 1e5 + 2;
int n, m;
int arr[N];
bool check(ll x)
{
  if (x >= m)
  {
    return true;
  }
  ll p = 0;
  // 21 23 24 25 26   m=20. x=0;

  // .... 3 1   x=1
  // [arr[i] ......  arr[i]+x]...... [p ......  ]

  //  3 4       x=1.
  //  3 4

  // 4 4
  // 3 2   x=1.
  // 3 3

  // 2 4 x=2.
  // 2 [4...6]

  // [0... .. ...(arr[i]+x)%m] ..p.. [arr[i]..........]

  // [0... ..p ...(arr[i]+x)%m]...  [arr[i]..........]
  for (int i = 0; i < n; i++)
  {
    if (p - arr[i] > x) // arr[i]+x < p
    {
      return false;
    }
    if (arr[i] > p)
    {
      if (arr[i] + x < m || (arr[i] + x) % m < p)
      {
        p = arr[i];
      }
    }
  }
  return true;
}
// 5 7
// 0 6 1 3 2   2
// 0 0 1 3 3
// 6 -> 0   1 time module
// 6->  1   2 time modulo.
// 2 [2,3,4]

// 0 1 2 3 4   m=7. x=7
// 0-> 0 ,1,2,3,4,5,6, 0
// 0 8 2 3 4
// 8 : 8 , 2, 3,4,5,6,0,1
// 0 6 1 3 2  1
// 0 0 1 3 3.

// 0 6 1 3 2   8
// 0 0 1 3 3
// 0 0 0 0 0

// 0 8 1 3 2    2
// 0 2 2 3 3

void solve()
{

  cin >> n >> m;
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  ll lo = 0;
  ll hi = m;
  ll ops = -1;
  while (lo <= hi)
  {
    ll mid = lo + (hi - lo) / 2;
    if (check(mid))
    {
      ops = mid;
      hi = mid - 1;
    }
    else
      lo = mid + 1;
  }
  cout << ops << endl;
}
int main()
{
  solve();
  return 0;
}