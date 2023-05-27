#include<bits/stdc++.h>
using namespace std;


const int MAXN = 1e7+79;
 
int spf[MAXN];
void sieve()
{
    spf[1] = 1;
    for (int i = 2; i < MAXN; i++)
        spf[i] = i;
 
    for (int i = 4; i < MAXN; i += 2)
        spf[i] = 2;
 
    for (int i = 3; i * i < MAXN; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j < MAXN; j += i)
                if (spf[j] == j)
                    spf[j] = i;
        }
    }
}
 


int cnt1[MAXN];

int cnt2[MAXN];


 
 
signed main() {
 ios::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 sieve();
 int n,m;
 cin >> n >> m;
 vector<int>a(n);
 vector<int>b(m);
 for(int i = 0 ; i < n ; i++) {
    cin >> a[i];
    int x = a[i];
    while(x != 1) {
        cnt1[spf[x]]++;
        x/=spf[x];
    }
 }
 for(int i = 0 ; i < m ; i++) {
    cin >> b[i];
    int x = b[i];
    while(x != 1) {
        cnt2[spf[x]]++;
        x/=spf[x];
    }
 }
 int g = 1;
 for(int i = 2 ; i < MAXN ; i++) {
    int p = min(cnt1[i],cnt2[i]);
    cnt1[i] -= p;
    cnt2[i] -= p;
 }
 vector<int>first;
 vector<int>second;
 for(int i = 0 ; i < n ; i++) {
    int x = a[i];
    int y = 1;
    while(x != 1) {
        int p = spf[x];
        int cnt = 0;
        while(x % p == 0) {
            x/=p;
            cnt++;
        }
        int mn = min(cnt1[p],cnt);
        cnt1[p] -= mn;
        for(int j = 0 ; j < mn ; j++) {
            y *= p;
        }
    }
    first.push_back(y);
 }
 for(int i = 0 ; i < m ; i++) {
    int x = b[i];
    int y = 1;
    while(x != 1) {
        int p = spf[x];
        int cnt = 0;
        while(x % p == 0) {
            x/=p;
            cnt++;
        }
        int mn = min(cnt2[p],cnt);
        cnt2[p] -= mn;
        for(int j = 0 ; j < mn ; j++) {
            y *= p;
        }
    }
    second.push_back(y);
 }
 if(first.empty()) first.push_back(1);
 if(second.empty()) second.push_back(1);
 cout << (int)first.size() << ' ' << (int)second.size() << '\n';
 for(auto &x : first) cout << x << ' ';
 cout << '\n';
 for(auto &x : second) cout << x << ' ';
 cout << '\n';
} 
