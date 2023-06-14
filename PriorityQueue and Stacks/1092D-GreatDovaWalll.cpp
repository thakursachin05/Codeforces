#include<stdio.h>

int n;
int s[200002],top;

int main()
{
scanf("%d",&n);
for(int i=1,x;i<=n;i++) scanf("%d",&x),x&=1,top&&s[top]==x?top--:s[++top]=x;
printf(top<=1?"YES":"NO");
return 0;
}