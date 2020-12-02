#include <stdio.h>

void nhap(int n, int a[], int g1[],int g2[], float total[]){
  int i;
  for(int i=0;i<n;i++){
    printf("Nhap so ao cau thu: ");
    scanf("%d",&a[i]);
    printf("Nhap diem giam khao 1: ");
    scanf("%d",&g1[i]);
    printf("Nhap diem giam khao 2: ");
    scanf("%d",&g2[i]);
    total[i]=1.0*(g1[i]+g2[i])/2;
  }
}

void xuat(int n, int a[], int g1[],int g2[], float total[]){
  int i;
  int sum1=0,sum2=0;
  for(int i=0;i<n;i++){
    printf("Cau thu so %d co diem la %0.2f\n",a[i],total[i]);
    sum1+=g1[i];
    sum2+=g2[i];
    
  }
  (sum1>sum2)?printf("Giam khao 1 rong rai nhat, giam 2 khat khe nhat\n"):printf("Giam khao 2 rong rai nhat, giam khao 1 khat khe nhat\n");
  
}

int main()
{
  //int choice;
  //do{
  //printf("Menu homework\n");
  //printf("1.Ex1\n");
  //printf("2.Ex2\n");
  //printf("3.Ex3\n");
  //printf("4.Exit\n");
  //printf("Enter your choice: ");
  //scanf("%d",&choice);
  //switch(choice){
  //case 1:;
    int n;
    int a[100],g1[100],g2[100];
    float total[100];
    nhap(5,a,g1,g2,total);
    xuat(5,a,g1,g2,total);
    //break;
    //case 2:;
    
    //}
    //}while(choice!=4);
  return 0;
}
