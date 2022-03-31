#include<stdio.h>
#include<math.h>
void input(float *x1,float *y1, float *x2,float *y2)
  {
    printf("enter points in the form x,y\n");
    scanf("%f%*c%f",&*x1,&*y1);
    scanf("%f%*c%f",&*x2,&*y2);
  }
void find_distance(float *x1,float *y1,float *x2,float *y2,float *area)
  {
    *area=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
  }
void output(float x1,float y1,float x2,float y2,float area)
  {
     printf("The distance between the point (%f,%f) and (%f,%f ) is %f",x1,y1,x2,y2,area);
  }
int main()
  {
    float x1,y1,x2,y2,area;
    input(&x1,&y1,&x2,&y2);
    find_distance(&x1,&y1,&x2,&y2,&area);
    output(x1,y1,x2,y2,area);
  }
