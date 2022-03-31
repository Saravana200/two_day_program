#include <stdio.h>
void input_string(char *a)
{
  printf("enter the string\n");
  scanf("%s",a);
}
char str_reverse(char *a)
{
  char x;
  int n;
  for(n=0;a[n]!='\0';n++);                     
  for(int i=0;i<n/2;i++)
  {
    x=a[i];
    a[i]=a[n-1-i];
    a[n-1-i]=x;
  }
  return ' ';
}
void output(char *a,char *reversea)
{
  printf("the reverse of %s is",a);
  str_reverse(reversea);
  printf("the reverse of %s is",reversea);
}
int main()
{
  char a[20];
  input_string(a);
  output(a,a);
}
