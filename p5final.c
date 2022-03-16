#include<stdio.h>
#include<math.h>
int input_array_size()
{
  int a;
  printf("enter the array size");
  scanf("%d",&a);
  return a;
}
void init_array(int n, int a[n])
{
  for(int i=0;i<n;i++)
    {
    a[i]=i+1;
  }
}
void erotosthenes_sieve(int n, int a[n])
{
  int i,j;
  for(i=1;i<n;i++)
    {
      if(a[i]==0)
        continue;
      for(j=a[i]+1;j<=n;j++)
        {
        if(j%a[i]==0)
      a[j-1]=0;
          }
    }
}
void out_put(int n, int a[n])
{
  printf("the prime numbers are\n");
  for(int i=0;i<n;i++)
    {
      if(a[i]!=0)
      {
        printf("%d ",a[i]);
        }
    }
  printf("/n");
  }
int main()
{
  int n,a[n];
  n=input_array_size();
  init_array(n,a);
  erotosthenes_sieve(n,a);
  out_put( n,a);
  return 0;
    
}
