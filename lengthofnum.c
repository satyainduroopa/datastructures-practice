#include<stdio.h>
#include<math.h>
int digitCount(int n)
{
  int i=0,a[9];
  if(n==0)
    return 1;
  while(n!=0)
    {
        a[i]=n%10;
        i++;
        n=n/10;
    }
  return i;
}
