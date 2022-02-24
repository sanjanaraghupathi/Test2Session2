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
    a[i]=i;
    a[0]=0;
   a[1]=0;
}
void erotosthenes_sieve(int n, int a[n])
{
  int i=0;
  while(i<sqrt(n))
    {
      while(a[i]==0)
        i++;
      for(int k=i+i;i<n;k+=i)
        {
        a[k]=0;
      i++;
          }
    }
}
void out_put(int n, int a[n])
{
  for(int i=0;i<n;i++)
    {
      if(a[i]!=0)
        printf("%d",a[i]);
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
