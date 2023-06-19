#include<bits/stdc++.h>
int n,x,mx;
std::stack<int>stk;
int main(){
	for(scanf("%d",&n);n;--n){
		scanf("%d",&x);
		mx=(x>mx?x:mx);
		(stk.empty()||x<stk.top())?stk.push(x):(x==stk.top())?stk.pop():stk.push(0);
	}
	printf((!stk.size()||stk.size()==1&&stk.top()==mx)?"YES\n":"NO\n");
	return 0;
}
