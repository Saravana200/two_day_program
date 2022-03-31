#include <stdio.h>
int input_number()
{
  int a;
  printf("enter the number\n");
  scanf("%d",&a);
  return a;
}
int is_composite(int n)
{
  for(int i=2;i<n;i++)
     if(n%i==0 && n!=2)
       return 0;
  return 1;
} 
void output(int n,int composite)
{
  if(composite==0)
    printf("the number %d is composite",n);
  else
    printf("the number %d is not composite",n);
}
int main()
{
  int n=input_number();
  output(n,is_composite(n));
}
