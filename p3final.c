#include <stdio.h>
int input_number()
{
  int x;
  printf("enter a number\n");
  scanf("%d",&x);
  return x;
}
int is_prime(int n)
{
  int count=0;
  for(int i=1;i<=n;i++)
    {
      if(n%i==0)
      
        count=count+1;
      }
      if(count>2)
      {
        return 1;
      }
      else
      {
        return 2;
      }
    }

void output(int n,int prime)
{
  if (prime==1)
  {
    printf("%d is not  a prime number\n",n);
  }
  else
   {
    printf("%d is  a prime number\n",n);
  }  
}
int main()
{
  int n,prime;
  n=input_number();
  prime=is_prime(n);
  output(n,prime);
  return 0;
}
