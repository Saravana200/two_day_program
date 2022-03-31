#include<stdio.h>
#include<math.h>
struct _point
{
  float x,y;
};typedef struct _point Point;
struct _line
{
   Point p1,p2;
   float distance;
};typedef struct _line Line;
Point input_point()
{
  Point p;
  printf("enter points in the form x,y\n");
  scanf("%f%*c%f",&p.x,&p.y);
  return p;
}
Line input_line()
{
  Line l;
  printf("enter the line with two points");
  l.p1=input_point();
  l.p2=input_point();
  return l;
}
void find_length(Line *l)
{
  l->distance=sqrt((pow((l->p1.x-l->p2.x),2)+pow((l->p1.y-l->p2.y),2)));
}
void output(Line l)
  {
     printf("The distance between the point (%f,%f) and (%f,%f ) is %f",l.p1.x,l.p1.y,l.p2.x,l.p2.y,l.distance);
  }
int main()
  {
    Line l=input_line();
    find_length(&l);
    output(l);
  }
