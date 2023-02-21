#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin>>n;

    long long i = n-1;
    long long sum = (i*(i+1))/2;
    long long sum1 = (i*(i+1)*(2*i+1))/6;

    cout<<n*(sum+1) - sum1 <<endl;
}
