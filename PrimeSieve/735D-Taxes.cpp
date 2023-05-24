#include <bits/stdc++.h>
using namespace std;

int n;

bool prime_(int x) {
   if (x == 2) {
      return true;
   }
   if (!(x & 1)) {
      return false;
   }
   for (int i = 3; i <= ((x + 1) / i); i += 2) {
      if (x % i == 0) {
         return false;
      }
   }
   return true;
}

void Solve() {
   n;
   cin >> n;
   if (prime_(n)) {
      cout << 1 << '\n';
   }
   else if (!(n & 1)) {
      cout << 2 << '\n';
   }
   else {
      if (prime_(n - 2)) {
         cout << 2 << '\n';
      }
      else {
         cout << 3 << '\n';
      }
   }
   // Goldbach Conjecture rocks
}

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   Solve();
   return 0;
}

// in the end, it doesn't even matter
