#include <stdio.h>
struct _triangle
{
  float base,altitude,area;
};typedef struct _triangle Triangle;
int input_n()
{
  int n;
  printf("enter the array size\n");
  scanf("%d",&n);
  return n;
} 
Triangle input_triangle()
{
  Triangle t;
  printf("enter the base and altitutde\n");
  scanf("%f %f",&t.base,&t.altitude);
  return t;
}
void input_n_triangles(int n,Triangle t[n])
{
  for(int i=0;i<n;i++)
    t[i]=input_triangle();
}
void find_area(Triangle *t)
{
  t->area=0.5*(t->base*t->altitude);
}
void find_areas_n(int n,Triangle t[n])
{
  for(int i=0;i<n;i++)
    find_area(&t[i]);
}
Triangle find_smallest_triangle(int n,Triangle t[n])
{
  int l=0;
  for(int i=0;i<n;i++)
  {
    if(t[l].area>=t[i].area)
      l=i;
  }
  return t[l];
}
void output(int n,Triangle t[n],Triangle smallest)
{
  printf("the smallest triangle with base and altitude\n");
  for(int i=0;i<n-2;i++)
    printf("(%f,%f),",t[i].base,t[i].altitude);
  printf("(%f,%f) and (%f,%f) is\n",t[n-2].base,t[n-2].altitude,t[n-1].base,t[n-1].altitude);
  printf("triangle with base %f and altitude %f",smallest.base,smallest.altitude);
  printf("area of the triangle with base %f and altitude %f is %f",smallest.base,smallest.altitude,smallest.area);
}
int main()
{
  int n=input_n();
  Triangle t[n];
  input_n_triangles(n,t);
  find_areas_n(n,t);
  output(n,t,find_smallest_triangle(n,t));
}
