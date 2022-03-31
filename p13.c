#include <stdio.h>
#include <math.h>
int input_array_size()
{
  printf("enter the array size\n");
  int n;
  scanf("%d",&n);
  return n;
}
void init_array(int n,int a[n])
{
  for(int i=0;i<n;i++)
    a[i]=i;
}
void erotosthenes_sieve(int n,int a[n])
{
  int i=2;
  while(i<sqrt(n))
  {
    while(a[i]==0)
      i++;
    for(int g=i+i;g<n;g+=i)
      {
        a[g]=0;         
      }
    i++;
  }
}
void out_put(int n,int a[n])
{
  for(int i=0;i<n;i++)
    {
      if(a[i]!=0)
        printf("%d,",a[i]);
    }   
}
int main()
{
  int n=input_array_size();
  int a[n];
  init_array(n,a);
  erotosthenes_sieve(n,a);
  out_put(n,a);
}
