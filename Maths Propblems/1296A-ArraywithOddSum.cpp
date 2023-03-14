// https://codeforces.com/problemset/problem/1296/A
#include <iostream>
using namespace std;
int main() {
    int t = 1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int flag = 0,flag2 = 0;
        for(int i=0;i<n;i++) {
            cin>>arr[i];
            if(arr[i]&1){
                flag= 1;
            }
            else flag2=1;
        }

        if((flag2 && flag) || (flag && n&1)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}
