#include <stdio.h>

void DesSort (int a[], int n)
{
  int tmp,i;
  for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++)
      if(a[i]<a[j]){
	tmp=a[i];
	a[i]=a[j];
	a[j]=temp;
      }
}
