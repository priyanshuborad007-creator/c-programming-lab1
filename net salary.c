#include<stdio.h>
int main()
{
int g,a,d;
printf("Enter the numbers :");
scanf("%d%d%d",&g,&a,&d);
sum=g+a-d;
printf("%d+%d-%d=%d,sum");
if(g>10000)
{
printf("allowances Is:%d\n",g*0.1);
printf("deduction Is:%d\n",d*0.03);
}
if (g>5000)
{
printf("allowances Is:%d\n",g*0.07);
printf("deduction Is:%d\n",d*0.02);
}
else
{
printf("Largest Number Is:%d\n",d);
 }
 return 0;
}
