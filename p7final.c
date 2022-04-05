#include <stdio.h>
#include<math.h>
struct _point
{
float x,y;
};
typedef struct _point Point;
struct _line
{
Point p1,p2;
float distance;
};
typedef struct _line Line;
Point input_point()
{
  Point Point1;
  float x1,y1,x2,y2;
  printf("enter two points\n");
  scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
  return Point; 
}
Line input_line()
{
   
  int n;
  printf("enter the number of lines\n");
  scanf("%d",&n);
  return n;
}
void find_length(float x1,float y1,float x2,float y2,float *l)
{
  *l= sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
void output(float l)
{
  printf("the length of the line is %f\n",l);
}
int main()
{
  
  int x1,y1,x2,y2,l,n;
  n=  input_line(n);
   find_length(x1,y1,x2,y2,&l);
  output(l);
  
}