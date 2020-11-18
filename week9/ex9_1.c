#include <stdio.h>
#include <math.h>

void kineticEnergy(float m, float v){
  //9.1
  do{
    printf("Enter m: ");
    scanf("%f",&m);
    if(m<0) printf("Wrong data\n");
  }while(m<0);
  
  do{
    printf("Enter v: ");
    scanf("%f",&v);
    if(v<0) printf("Wrong data\n");
  }while(v<0);
  float ke = m*v*v/2;
  printf("ke = %.2f where m = %.2f and v = %.2f\n",ke,m,v);
}

int isPrime(int n){
  //9.2
  int i;
  if(n==2) return 1;
  else{
  for(i = 2; i<=sqrt(n);i++){
    if(n%i==0) return 0;
  }
  }
  return 1;
  }

long sumcube(int n){
    //9.3
    int i;
    long s = 0;
    for(i=1;i<=n;i++){
      s+=i*i*i;
    }
    return s;
  }

void multiple(int n){
  //9.3
  int i;
  for(i=2;i<n;i++)
    if(n%i==0) printf("%5d",i);
}


void squareNumber(int n){
  //9.3
  int i;
  for(i=1;i<=n;i++)
    printf("Square(%d) = %d\n",i,i*i);
}


long salary(int hours)
//9.4
{
  if (hours >40) {
    
    return 40*15000+(hours-40)*1.5*15000;
  }
  else return hours*15000;
}

int main()
{
  //float m,v;
  //kineticEnergy(m,v);

  
  //int n,i;
  //do{
  //printf("Nhap n: ");
  //scanf("%d",&n);
  //}while(n<=0);
  //9.2phan a if(isPrime(n)) printf("true\n");
  //else printf("false\n");

  //for(i=2;i<=n;i++){
  //if(isPrime(i)) printf("%5d",i);
  //}
  //printf("\n");

  // printf("Phan a: sumcube = %ld\n",sumcube(n));
  //printf("Phan b: ");
  //multiple(n);
  //printf("\n");
  //squareNumber(n);
  
  //printf("\n");
  int n;
  do {
    printf("Enter number of working hours:");
    scanf("%d",&n);
  } while (n<10 || n>=65);
  printf("The salary you get:%ld\n",salary(n));
  return 0;
}
