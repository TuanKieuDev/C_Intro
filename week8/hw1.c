#include <stdio.h>

#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int ch;
    do{
        printf("MENU\n");
        printf("1.Liet ke cac so hoan hao tu 1 den N\n");
        printf("2.Liet ke cac so nguyen to tu 1 den N\n");
        printf("3.Liet ke cac uoc so cua N\n");
        printf("4.Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d",&ch);
        switch(ch){
            int N,i,j,count;
            case 1:;        
                count = 0;        
                printf("Nhap N: ");
                scanf("%d",&N);
                for(i=1;i<=N;i++){
                    int sum=0;
                    for(j=1;j<=i/2;j++){
                    if(i%j==0) sum+=j;
                    }
                    if(sum==i) {
                        printf("%5d",i);
                        count++;
                        if(count%10==0) printf("\n");
                        }
                }
                printf("\n");
                break;
            case 2:;
                count = 0;
		printf("Nhap N: ");
                scanf("%d",&N);
                for(i=2;i<=N;i++){
                    int k = 1;
                    for(j=2;j<=sqrt(i);j++){
                        if(i%j==0) {
                            k = 0;break;
                        }
                    }
                    if(k==1) {
                        printf("%5d",i);
                        count++;
                        if(count%10==0) printf("\n");
                        }
                }
                printf("\n");
                break;
            case 3:;
                count = 0;
                printf("Nhap N: ");
                scanf("%d",&N);
                for(i=1;i<=N;i++){
                    if(N%i==0) {
                    printf("%5d",i);
                    count++;
                    if(count%10==0) printf("\n");
                    }
                }
                printf("\n");
                break;
        }
    }while(ch!=4);
    return 0;
}
