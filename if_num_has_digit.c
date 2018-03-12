#include<stdio.h>
#include <iostream>
using namespace std;
bool hasDigit(int n, int d)
{
  int i=0;
  int a[9];
  int j=0;
  while(n!=0)
    {
        a[i]=n%10;
        i++;
        n=n/10;
    }

  for(j=i-1;j>=0;j--)
  {
    if(a[j]==d)
      return true;
  }
  return false;

}