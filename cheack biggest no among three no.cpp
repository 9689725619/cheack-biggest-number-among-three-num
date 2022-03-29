#include<stdio.h>
int main(){

int a,b,c,big;

printf("enter three num :");
scanf("%d%d%d",&a,&b,&c);
if(a>b)

{
	if(a>c)
	big=a;
	else
	big=c;
	
}
else
{
	if(b>c)
	big=b;
	else
	big=c;
}
printf("biggest num is=%d",big);
return 0;
}
