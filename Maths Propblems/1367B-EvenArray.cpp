// https://codeforces.com/problemset/problem/1367/B

#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int count = 0;
        int odd=0,even=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2!=i%2){
                if(arr[i]&1)
                odd++;
            else
                even++;
            }
        }
        if(odd!=even)
        {
            cout<<-1<<endl;
            continue;
        }
        cout<<odd<<endl;
        
    }
}
