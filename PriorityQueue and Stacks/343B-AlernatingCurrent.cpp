#include <cstdio>
char A; bool odd; int d;
int main(){
while((A=getchar())!='\n')
if(odd^=1)
if(A=='-') d++; else d--;
else
if(A=='-') d--; else d++;
puts(d?"No":"Yes");}

