#include <stdio.h>
int input_side()
{
  int s;
  printf("enter the side of the triangle\n");
  scanf("%d",&s);
  return s;
}
int check_scalene(int a,int b, int c)
{
  return a!=b && b!=c && c!=a?1:0;
}
void output(int a, int b, int c, int isscalene)
{
  if(isscalene==1)
    printf("the triangle with sides %d,%d,%d is scalene",a,b,c);
  else
    printf("the triangle with sides %d,%d,%d is not scalene",a,b,c);
}
int main()
{
  int a=input_side();
  int b=input_side();
  int c=input_side();
  output(a,b,c,check_scalene(a,b,c));
}