#include <stdio.h>
void input_string(char *a)
{
  scanf("%s",a);
}
int str_reverse(char *string,char *substring)
{
  int n=0,j=0,index=0;;
  for(int i=0;string[i]!='\0' && substring[j]!='\0';i++)
    {
      if(substring[j]==string[i])
      {
        j++;
        if(index==-1)
          index=i;
      }
      else
      {
        j=0;
        index=-1;
      }
    }
  return index;
}
void output(char *string,char *substring,int index)
{
  if(index==-1)
  {
    printf("not found");
  }
  else
  printf("%d",index);
}
int main()
{
  printf("enter the string\n");
  char string[20],substring[20];
  input_string(string);
  printf("enter the substring\n");
  input_string(substring);
  output(string,substring,str_reverse(string,substring));
}
