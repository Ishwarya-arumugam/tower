#include<stdio.h>
void tower(int n,char frompole,char topole,char withpole)
{
if(n==1)
{
printf("disc moves from %c to %c",frompole,topole);
}
tower(n-1,topole,frompole,withpole);
printf("disc moves from %d frompole %c to pole %c",n,frompole,topole);
}
void main()
{
int n;
scanf("%d",n);
tower(n,'a','b','c');
}
