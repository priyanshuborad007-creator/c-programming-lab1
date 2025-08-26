#include<stdio.h>.
int main()
{
int a,b,c;
printf("Enter Three Number:");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
printf("Largest Number Is:%d\n",a);
}
if (b>a&&b>c)
{
printf("Largest Number Is:%d\n",b);
}
if(c>a&&c>b)
{
printf("Largest Number Is:%d\n",c);
 }
 return 0;
}
