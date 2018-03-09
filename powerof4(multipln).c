#include<stdio.h>
#include<math.h>

bool isPowerOfFour(int n)
{
  int j;
  if(n==0)
    return false;
  if(n==4 ||n==1)
    return true;
  if(n%4!=0)
    return false;
   else{
        for(j=4;j<=n;)
        {
          j=j*4;
          if(j==n)
             return true;
        }
     return false;
   }
     return false;
}