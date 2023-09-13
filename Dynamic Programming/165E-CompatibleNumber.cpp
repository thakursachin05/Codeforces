#import<iostream>
using z=int;z a['100'],f[1<<22];main(){z n;std::cin>>n;for(z i=1;i<=n;i++)std::cin>>a[i],f[a[i]]=a[i];for(z i=0;i<22;i++)for(z j=0;j<1<<22;j++)if(j&1<<i&&f[j^1<<i])f[j]=f[j^1<<i];for(z i=1,b;i<=n;i++)std::cout<<(f[b=((1<<22)-1)^a[i]]?f[b]:-1)<<' ';}
	 	 					 	   	 				 	 	 	  			