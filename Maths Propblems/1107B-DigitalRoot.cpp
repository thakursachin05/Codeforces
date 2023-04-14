// https://codeforces.com/problemset/problem/1107/B

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        long long K;
        int X;
        cin >> K >> X;
        cout << 9 * (K - 1) + X << '\n';
    }
}
