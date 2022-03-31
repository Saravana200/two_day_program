#include <stdio.h>
int input_number()
{
  int a;
  scanf("%d",&a);
  return a;
}
int is_prime(int n)
{
  for(int i=2;i<n;i++)
  {
    if(n%i==0)
      return -1;
  }
  return 0;
}
void output(int n,int is_prime)
{
  if(is_prime==0)
    printf("the number %d entered is a prime number",n);
  else
    printf("the number %d entered is not a prime number",n);
}
int main()
{
  printf("enter the number\n");
  int n=input_number();
  output(n,is_prime(n));
}
