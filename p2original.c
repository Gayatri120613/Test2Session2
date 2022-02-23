#include<stdio.h>
#include<math.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("Enter the vertices of the triangle\n");
  scanf("%f%f%f%f%f%f",x1,y1,x2,y2,x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
  int istriangle;
   istriangle=(x1*(y2-y1)+x2*(y3-y1)+x3*(y1-y2));
  return istriangle;
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int istriangle)
{
if(istriangle==1)
  printf("the points (%f,%f),(%f,%f) and (%f,%f)",x1,y1,x2,y2,x3,y3);
  else
  printf("the points (%f,%f),(%f,%f) and (%f,%f) is not a triangle\n",x1,y1,x2,y2,x3,y3);
}
int main()
{
  float x1,y1,x2,y2,x3,y3;
  int istriangle;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,istriangle);
    return 0;
}