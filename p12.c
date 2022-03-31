#include <stdio.h>
int input()
{
  int n=0;
  printf("enter the limit");
  scanf("%d",&n);
  return n;
}
int find_fibo(int n)
{
  if(n==0 || n==1)
    return n;
  return (find_fibo(n-1)+find_fibo(n-2));
}
void output(int n,int fibo)
{
  printf("%d",fibo);
}
int main()
{
  int n=input();
    output(n,find_fibo(n-1));
}
