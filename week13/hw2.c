#include <stdio.h>
#include <string.h>
#include <ctype.h>


void strdelete(char *s,int vt,int sl)
    {  
        int n=strlen(s),i;
        for (i=vt;i<=n-sl;++i)
            s[i]=s[i+sl];
    }
void chuanhoachuoi(char a[])
    {
        int i;
	int j=0;
	
        while(a[strlen(a)-1]==' ')// xoa het cac ki tu trong o cuoi chuoi
            a[strlen(a)-1]=0;
        while(a[0]==' ')          //xoa het cac ki tu trong o dau chuoi
            strdelete(a,0,1);
        for(i=0;i<strlen(a);++i)
            if((a[i]>=65)&&(a[i]<=90))  //kiem tra co phai la ky tu hoa
                a[i]+=32;        //chuyen tat ca ve ky tu thuong
     
        i=0;
        while(i<strlen(a))                //xoa hai ki tu trong lien tiep
         if((a[i]==' ')&&(a[i+1]==' '))
             strdelete(a,i,1);
         else ++i;
     
       for(i=0;i<strlen(a);i++)
        if(a[i]==' ')
            a[i+1]-=32;  //chuyen chu cai sau khoang trang thanh chu hoa
       
       a[0]=toupper(a[0]);//chuyen chu cai dau tien thanh chu hoa
         
       
        i=0;
        while(i<strlen(a))    //xoa cac ki tu khong phai la chu cai
        if((a[i]!=' ')&&(!isalpha(a[i])))
            strdelete(a,i,1);
         else ++i;
	
    }

void nhap(char a[], int n){
  int i;
  for(i=0;i<n;i++){
    
    printf("Nhap ten hs %d: ",i+1);
    //while((getchar())!='\n');
    gets(a);
  }
}

int main()
    {
       char a[100];
   

	 nhap(a,5);
       chuanhoachuoi(a);
       printf("Chuoi sau chuan hoa: %s\n",a);
       return 0;
    }
     
   
