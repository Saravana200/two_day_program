#include<stdio.h>
#include<math.h>
void input_triangle(float *x1,float *y1, float *x2,float *y2,float *x3,float *y3)
  {
    printf("enter points in the form x,y\n");
    scanf("%f%*c%f",&*x1,&*y1);
    scanf("%f%*c%f",&*x2,&*y2);
    scanf("%f%*c%f",&*x3,&*y3);
  }
int is_triangle(float x1,float y1,float x2,float y2,float x3,float y3)
  {
    return 0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))==0?1:-1;
  }
void output(float x1,float y1,float x2,float y2,float x3,float y3,int istriangle)
  {
    if(istriangle==-1)
     printf("It forms a triangle with the points (%f,%f),(%f,%f) and (%f,%f)",x1,y1,x2,y2,x3,y3);
    else
      printf("It does not form a triangle with the points (%f,%f),(%f,%f) and (%f,%f)",x1,y1,x2,y2,x3,y3);
  }
int main()
  {
    float x1,y1,x2,y2,x3,y3;
    input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  output(x1,y1,x2,y2,x3,y3,is_triangle(&x1,&y1,&x2,&y2,&x3,&y3));
  }
