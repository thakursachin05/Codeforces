// https://codeforces.com/contest/486/problem/B
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>> a(n,vector<int>(m,1));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    vector<vector<int>> b(n,vector<int>(m,1));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==0){
                for(int k=0;k<n;k++){
                   b[k][j] = 0;
                }
                for(int k=0;k<m;k++){
                    b[i][k] = 0;
                }
            }
        }
    }
vector<vector<int>> c(n,vector<int>(m,0));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int flag1 = 0,flag2 = 0;
            for(int k=0;k<n;k++){
                if(b[k][j] == 1) flag1 = 1;
            }
            for(int k=0;k<m;k++){
                if(b[i][k] == 1) flag2 = 1;
            }
            if(flag1 || flag2) c[i][j] = 1;
        }
    }

    //  for(int i=0;i<n;i++){
    //             for(int j=0;j<m;j++){
    //                 cout<<b[i][j]<<" ";
    //             }
    //             cout<<endl;
    //         }
    //         cout<<endl;
    //          for(int i=0;i<n;i++){
    //             for(int j=0;j<m;j++){
    //                 cout<<c[i][j]<<" ";
    //             }
    //             cout<<endl;
    //         }

        if(c!=a){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    cout<<b[i][j]<<" ";
                }
                cout<<endl;
            }
        }
}
