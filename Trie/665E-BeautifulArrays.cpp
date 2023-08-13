#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+5, L = 30;
int A[N], n, k;
long long rt;
int main(){
scanf("%d %d", &n, &k); k--;
for(int i=1;i<=n;i++) scanf("%d", &A[i]);
for(int i=1;i<=n;i++) A[i]^=A[i-1];
sort(A, A+n+1);
for(int i=0;i<=n;i++) for(int j=0;j<L;j++) if(!(k&(1<<j))){
int t = ((A[i]>>j)^((k>>j)|1))<<j;
rt+=lower_bound(A, A+n+1, t+(1<<j)) - lower_bound(A, A+n+1, t);
}
printf("%lld", rt>>=1);
}