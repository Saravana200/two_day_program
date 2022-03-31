#include <stdio.h>
int input()
{
  int a;
  printf("enter the number\n");
  scanf("%d",&a);
  return a;
}
int gcd(int a,int b)
{
  int t=1;
  if(a<b)
  {
     t=b;
     b=a;
     a=t;
  }
  while(t!=0)
  {
    t=a%b;
    a=b;
    b=t;
  }
  return a;
}
void output(int a,int b,int gcd)
{
    printf("the gcd of %d and %d is %d",a,b,gcd);
}
int main()
{
  int a=input();
  int b=input();
  output(a,b,gcd(a,b));
}