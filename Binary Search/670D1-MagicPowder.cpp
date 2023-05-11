// https://codeforces.com/contest/670/problem/D1 

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int func(int num_cake, vector<int> &a1, vector<int> &a2, int k)
{
    int mgrid = k;
    for (int i = 0; i < a1.size(); i++)
    {
        if ((num_cake * a1[i]) <= (a2[i] + mgrid))
        {
            if (num_cake * a1[i] > a2[i])
                mgrid -= ((num_cake*a1[i])-a2[i]);
        }
        else
            return 0;
    }
    return 1;
}

void solve() 
{
    int n, k;
    cin >> n >> k;
    // int a1[n], a2[n];
    vector<int> a1(n, 0), a2(n, 0);
    for (int i = 0; i < n; i++)
        cin >> a1[i];
    for (int i = 0; i < n; i++)
        cin >> a2[i];

    int l = 0, h = 1000000;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (func(mid, a1, a2, k))
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    cout << (l + h) / 2;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}