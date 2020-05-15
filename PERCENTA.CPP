#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
int n1,n2,n3,n4,n5,sum;
float per;

printf("enter marks of 5 subject\n");
scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);

sum=n1+n2+n3+n4+n5;
per=(sum*100)/500;

printf("Sum of 5 subject is %d\n percentage of 5 subject is %f",sum,per);

getch();
}