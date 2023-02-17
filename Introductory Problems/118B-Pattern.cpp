#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int spaces = n;
    for(int i=0;i<=n;i++){
        int k = spaces;
        while(k--) cout<<"  ";
        int j=0;
        for(;j<=i;j++){
           if(j==0 && i==0) cout<<j;
            else 
                cout<<j<<" ";
        }
        j -= 1;
        while(j--){
            if(j==0) cout<<j;
            else 
                cout<<j<<" ";
        }
        spaces--;
        cout<<endl;
    }
    spaces = 1;
     for(int i=0;i<n;i++){
        int k = spaces;
        while(k--) cout<<"  ";
        int j=0;
        for(;j<n-i;j++){
            if(j==0 && i==n-1) cout<<j;
            else 
                cout<<j<<" ";
        }
        j -= 1;
        while(j--){
            if(j==0) cout<<j;
            else 
                cout<<j<<" ";
        }
        spaces++;
        cout<<endl;
    }
}
