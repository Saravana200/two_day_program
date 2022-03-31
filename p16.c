#include <stdio.h>
#include <math.h>
struct _point
{
  float x,y;
};typedef struct _point Point;
struct _line
{
  Point p1,p2;
  float distance;
};typedef struct _line Line;
struct _polygon
{
  int n;
  Line l[100];
  float perimeter;
};typedef struct _polygon Polygon;
int input_n()
{
  printf("enter the number of sides\n");
  int n;
  scanf("%d",&n);
  return n;
}
Line input_line()
{
    printf("enter the points of the line in the order x,y\n");
    Line l;
    scanf("%f%*c%f",&l.p1.x,&l.p1.y);
    scanf("%f%*c%f",&l.p2.x,&l.p2.y);
    return l;
}
void input_n_lines(int n, Line l[n])
{
    for(int i=0;i<n-1;i++)
    {
        l[i]=input_line();
        while((i!=0 && l[i].p1.x==l[i-1].p2.x && l[i].p1.y==l[i-1].p2.y) )//|| (i!=0 && l[i].p2.x==l[i-1].p1.x && l[i].p2.y==l[i-1].p1.y))
        {
            printf("wrong co ordinates enter the values again\n");
            l[i]=input_line();
        }
    }
    l[n-1].p1.x=l[n-2].p2.x;
    l[n-1].p1.y=l[n-2].p2.y;
    l[n-1].p2.x=l[0].p2.x;
    l[n-1].p2.y=l[0].p2.y;
}
void find_perimeter(Polygon *p)
{
    p->perimeter=0;
    for(int i=0;p->l[i+1].p1.x!='\0';i++)
    {
        p->perimeter=p->perimeter+sqrt(pow(p->l[i].p1.x-p->l[i].p2.x,2)+pow(p->l[i].p1.y-p->l[i].p2.y,2));
    }
}
void output(Polygon *p)
{
   printf("the perimeter of the polygon is: %f ",p->perimeter);    
}
int main()
{
   Polygon p;
   int n=input_n();
   while(n<3)
   {
       printf("enter more than 3 sides for a polygon\n");
       n=input_n();
   }
   input_n_lines(n,p.l);
   find_perimeter(&p);
   output(&p);
}
