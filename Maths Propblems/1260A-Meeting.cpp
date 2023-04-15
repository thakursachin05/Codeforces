// https://codeforces.com/problemset/problem/1260/A
#include<bits/stdc++.h>
using namespace std;

int main() {


	int t; cin >> t;
	while(t--) {
        int n,k;
        cin>>n>>k;
        int d = k / n;
        int rem = k % n;
        cout << rem * (d + 1) * (d + 1) + (n - rem) * d * d << endl;

	}
	return 0;
}