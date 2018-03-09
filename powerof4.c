#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool isPowerOfFour(int n)
{
  int i=0;
  while(true)
  {
    int a=(int)pow(4,i);
    i++;
    if(a==n)
      return true;
    if(a>n)
       return false;
  }
  return false;
}
