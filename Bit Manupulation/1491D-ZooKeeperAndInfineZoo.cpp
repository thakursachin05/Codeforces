#include<iostream>
using namespace std;
int main()
{
	int t,a,b;
	cin>>t;
	while(t--)
	{
		bool p=1;
		int aa=0,bb=0;
		cin>>a>>b;
		for(int i=0;i<30;i++)
		{
			aa+=((a>>i)&1);
			bb+=((b>>i)&1);
			if(bb>aa) p=0;
		}
		if(!p||a>b) printf("NO\n");
		else printf("YES\n");
	}
}