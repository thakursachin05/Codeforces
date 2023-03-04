// https://codeforces.com/problemset/problem/1244/B

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i=0,j=s.size()-1;
        int pos = -1;
        while(i<s.size() && j>=0){
            if(s[i]=='1'){
                pos = n-i;
                break;
            }
            if(s[j] == '1'){
                pos = j+1;
                break;
            }
            i++;
            j--;
        }
        if(pos ==-1){
            cout<<n<<endl;
        }
        else{
            cout<<2*pos<<endl;
        }
        
    }

}
