#include<stdio.h>
int main()
{
  int i,j,n;
  printf("nhap n: "); scanf("%d",&n);
  for(i=1;i<=n;i++)
    {
      for(j=1;j<=n;j++)
	{
	  if(i==1||i==n)
	    printf("*");
	  else
	    //h1 
	    //h2 if(j==i)
	    //h3 if(j==n+1-i)
	    //h4 if(j==i||j==n+1-i)
	    // hinh5
	       if(j==n+1-i||j==i||j==1||j==n)
	          printf("*");
	       else
	          printf(" ");
	}
      printf("\n");
    }
  
  return 0;
}



/* hinh 1
#include<stdio.h>
int main()
{
  int i,j,n;
  printf("nhap n:"); scanf("%d",&n);
  for(i=1;i<=n;i++)
    {
      for(j=1;j<=n;j++){
	if(i==1||i==n)
	  printf("*");
	else
	  if(j==1||j==n)
	    printf("*");
	  else
	    printf(" ");
      }
      printf("\n");
    }
  return 0;
}
*/



/* hinh thoi

#include<stdio.h>
int main()
{
  int i,j,n;
  printf("nhap n: "); scanf("%d",&n);
  printf("chieu cao la %d\n",2*n-1);
  for(i=1;i<=2*n-1;i++)
    {
      if(i<=n)
       {
	 for(j=1;j<=n+i-1;j++)
	{
	  if(j>=n+1-i)
	    printf("*");
	  else
	    printf(" ");
	}
       }else if(i>n)
	 {
	   for(j=1;j<=3*n-i-1; j++)
	     {
	       if(j>=i-n+1)
		 printf("*");
	       else
		 printf(" ");
	     }
	 }
	 printf("\n");
    }
  
  return 0;
}
       
*/


/* TAM GIAC CAN
#include<stdio.h>
int main()
{
  int i,j,n;
  printf("nhap chieu cao n: "); scanf("%d",&n);
  for(i =1;i<=n;i++)
    {
      for(j=1;j<=n+i-1;j++)
	{
	  if(j>=n+1-i)
	    printf("*");
	  else
	    printf(" ");
	}

      for(j=1;j<=n-i;j++)
	printf(" ");
      for(j=1;j<=2*i-1;j++)
	printf("*"); 
      printf("\n");
    }
  return 0;
}
*/
