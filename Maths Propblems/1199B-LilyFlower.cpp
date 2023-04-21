#include <bits/stdc++.h>
using namespace std;
int main() {
    // cout<<"Hello World!";
    double h,l;
    cin>>h>>l;

    double k = l*l - h*h;
    k /= 2*h;

    // cout<<k<<endl;
    printf("%.13f \n",k);
}
