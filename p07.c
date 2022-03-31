#include <stdio.h>
struct _triangle
{
  float base,altitude,area;
};
typedef struct _triangle Triangle;
Triangle input()
{
  Triangle t;
  printf("enter the base and altituted\n");
  scanf("%f %f",&t.base,&t.altitude);
  return t;
}
void find_area(Triangle *t)
{
  t->area=0.5*(t->base*t->altitude);
}
void output(Triangle t)
{
  printf("area of the triangle with base=%f and altitude=%f is %f",t.base,t.altitude,t.area);
}
int main()
{
  Triangle t=input();
  find_area(&t);
  output(t);
}
