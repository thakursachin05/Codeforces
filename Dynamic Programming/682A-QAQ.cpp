#include <bits/stdc++.h>

using namespace std;

int main(){
    string c; cin>> c;
    map<char,int>mp;
    int cont=0;
    for(int i=0;i<c.size();++i){
        if(c[i]=='Q')
        for(int j=i+1;j<c.size();++j){
            if(c[j]=='A')
            for(int k=j+1;k<c.size();++k){
                if(c[k]=='Q')cont++;
            }
        }
    }
    cout<<cont<<endl;

}
