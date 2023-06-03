#import<ios>
int n,m,a[50],x,i=50;main(){scanf("%d%d",&n,&m);*a=n;while(m++<n)++a[x+1],----a[x]<2?x++:0;if(--m>n||1ll<<x>n)return puts("NO");puts("YES");while(i--)while(a[i]--)printf("%d ",1<<i);}