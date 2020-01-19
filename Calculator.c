#include<stdio.h>
main()
{
int x,y; char a; float s;
printf("enter two values");
scanf("%d%d",&x,&y);
fflush(stdin);
printf("enter + for addition,- for subtration,* for multiplication,/ for division");
scanf("%c",&a);
switch(a)
{
case'+':
s=x+y;printf("s=%f",s);break;
case'-':
s=x-y;printf("s=%f",s);break;
case'*':
s=x*y;printf("s=%f",s);break;
case'/':
s=x/y;printf("s=%f",s);break;
default:
printf("choose correct symbol");
}
}