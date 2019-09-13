#include<stdio.h>
void main()
{
int a,b,c;
int add(int,int);
printf("enter a,b values");
scanf("%d%d",&a,&b);
c=add(a,b);
printf("the sum of a,b is %d",c);
}
int add(int a,int b)
{
int c;
c=a+b;
return (c);
}
