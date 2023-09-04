#import<bits/stdc++.h>
std::bitset<1024>d;main(){int m,a;for(std::cin>>a>>m;std::cin>>a;)a%=m,d|=d<<a|d>>m-a,d[a]=1;puts(d[0]?"YES":"NO");}