#include <stdio.h>
int input()
{
  int n;
  printf("enter the value up to which the series is required\n");
  scanf("%d",&n);
  return n;
}
int find_fibo(int n)
{
  int a=0,b=1,sum;
  for(int i=1;i<n;i++)
    {
      sum=a+b;
      a=b;
      b=sum;
    }
  return a;
}
void output(int n, int fibo)
{
 printf("\n"); 
   printf(" %d th term of fibonacci sequence is %d \n",n,fibo); 
}
int main()
{
  int n,fibo;
  n=input();
  fibo=find_fibo(n);
  output(n,fibo);
  return 0;
}
