#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void arena(char *sa, float *a,char *sb, float *b){
	float p, temp1=a[2], temp2=b[2];
	int m,n,i;
	printf("\nTran dau giua %s va %s:",sa,sb);
	if(a[1]>=b[1]){
	p=1;
	printf("\n  -%s (%.1f diem nhanh nhen) tan cong truoc(%.1f dame).\n",sa, a[1], a[0]);
	printf("%s giam mau %.1f con %.1f.", sb, b[2], b[2]-a[0]);
	b[2]-=a[0];
	}
	else {
	p=0;
	printf("\n  -%s (%.1f diem nhanh nhen) tan cong truoc(%.1f dame).\n",sb, b[1], b[0]);
	printf("%s giam mau %.1f con %.1f.", sa, a[2], a[2]-b[0]);
	a[2]=a[2]-b[0];}
	if(p==1){
		do{
		printf("\n-  %s tan cong (%.1f dame).", sb, b[0]);
		printf("%s giam mau %.1f xuong %.1f",sa, a[2], a[2]-b[0]);
		a[2]=a[2]-b[0];
		if(a[2]<=0){
			printf("\n* %s knock out. %s thang.\n", sa, sb);
			printf("---------------------------------\n");
			printf("%s duoc tang cac chi so 2%%.\n",sb);
			b[0]=b[0]*1.02;b[1]=b[1]*1.02;b[2]=temp2*1.02;
			printf("%s duoc tang cac chi so 1%%.\n",sb);
			a[0]=a[0]*1.01;a[1]=a[1]*1.01;a[2]=temp1*1.01;
			printf("Thuong ngau nhien:\n");
			m=rand()%3;
			n=rand()%3;
			printf("%s duoc tang %d%% chi so.\n",sa, m);
			for(i=1;i<=3;i++)
			a[i]=a[i]+(float)a[i]*m/100;
			printf("%s duoc tang %d%% chi so.\n",sb, n);
			for(i=1;i<=3;i++)
			b[i]=b[i]+(float)b[i]*m/100;
			printf("*************************************\n");
			printf("+ Chi so sau tran dau:\n");
			printf("%-15s\t%-5s\t%-5s\t%-5s\n","Ten cua dau thu","SM","NN","Mau");
			printf("%-15s\t%-3.1f\t%-3.1f\t%-3.1f\n",sa, a[0],a[1],a[2]);
			printf("%-15s\t%-3.1f\t%-3.1f\t%-3.1f\n",sb, b[0],b[1],b[2]);
			printf("*************************************\n");
			break;
		}
		printf("\n-  %s tan cong (%.1f dame).", sa, a[0]);
		printf("%s giam mau %.1f xuong %.1f",sb, b[2], b[2]-a[0]);
		b[2]=b[2]-a[0];
		if(b[2]<=0){
			printf("\n* %s knock out. %s thang.\n", sb, sa);
			printf("---------------------------------\n");
			printf("%s duoc tang cac chi so 2%%.\n",sa);
			a[0]=a[0]*1.02;a[1]=a[1]*1.02;a[2]=temp1*1.02;
			printf("%s duoc tang cac chi so 1%%.\n",sb);
			b[0]=b[0]*1.01;b[1]=b[1]*1.01;b[2]=temp2*1.01;
			printf("Thuong ngau nhien:\n");
			m=rand()%3;
			printf("%s duoc tang %d%% chi so.\n",sa, m);
			for(i=1;i<=3;i++)
			a[i]=a[i]+(float)a[i]*m/100;
			n=rand()%3;
			printf("%s duoc tang %d%% chi so.\n",sb, n);
			for(i=1;i<=3;i++)
			b[i]=b[i]+(float)b[i]*n/100;
			printf("*************************************\n");
			printf("+ Chi so sau tran dau:\n");
			printf("%-15s\t%-5s\t%-5s\t%-5s\n","Ten cua dau thu","SM","NN","Mau");
			printf("%-15s\t%-3.1f\t%-3.1f\t%-3.1f\n",sa, a[0],a[1],a[2]);
			printf("%-15s\t%-3.1f\t%-3.1f\t%-3.1f\n",sb, b[0],b[1],b[2]);
			printf("*************************************\n");
			break;
		}
	} while(b[2]>0&&a[2]>0);
} else if(p==0){
		do{
		printf("\n-  %s tan cong (%.1f dame).", sa, a[0]);
		printf("%s giam mau %.1f xuong %.1f",sb, b[2], b[2]-a[0]);
		b[2]=b[2]-a[0];
		if(b[2]<=0){
			printf("\n* %s knock out. %s thang.\n", sb, sa);
			printf("---------------------------------\n");
			printf("%s duoc tang cac chi so 2%%.\n",sa);
			a[0]=a[0]*1.02;a[1]=a[1]*1.02;a[2]=temp1*1.02;
			printf("%s duoc tang cac chi so 1%%.\n",sb);
			b[0]=b[0]*1.01;b[1]=b[1]*1.01;b[2]=temp2*1.01;
			printf("Thuong ngau nhien:\n");
			m=rand()%3;
			printf("%s duoc tang %d%% chi so.\n",sa, m);
			for(i=1;i<=3;i++)
			a[i]=a[i]+(float)a[i]*m/100;
			n=rand()%3;
			printf("%s duoc tang %d%% chi so.\n",sb, n);
			for(i=1;i<=3;i++)
			b[i]=b[i]+(float)b[i]*n/100;
			printf("*************************************\n");
			printf("+ Chi so sau tran dau:\n");
			printf("%-15s\t%-5s\t%-5s\t%-5s\n","Ten cua dau thu","SM","NN","Mau");
			printf("%-15s\t%-3.1f\t%-3.1f\t%-3.1f\n",sa, a[0],a[1],a[2]);
			printf("%-15s\t%-3.1f\t%-3.1f\t%-3.1f\n",sb, b[0],b[1],b[2]);
			printf("*************************************\n");
			break;
		}
		printf("\n-  %s tan cong (%.1f dame).", sb, b[0]);
		printf("%s giam mau %.1f xuong %.1f",sa, a[2], a[2]-b[0]);
		a[2]=a[2]-b[0];
		if(a[2]<=0){
			printf("\n* %s knock out. %s thang.\n", sa, sb);
			printf("---------------------------------\n");
			printf("%s duoc tang cac chi so 2%%.\n",sb);
			b[0]=b[0]*1.02;b[1]=b[1]*1.02;b[2]=temp2*1.02;
			printf("%s duoc tang cac chi so 1%%.\n",sb);
			a[0]=a[0]*1.01;a[1]=a[1]*1.01;a[2]=temp1*1.01;
			printf("Thuong ngau nhien:\n");
			m=rand()%3;
			n=rand()%3;
			printf("%s duoc tang %d%% chi so.\n",sa, m);
			for(i=1;i<=3;i++)
			a[i]=a[i]+(float)a[i]*m/100;
			printf("%s duoc tang %d%% chi so.\n",sb, n);
			for(i=1;i<=3;i++)
			b[i]=b[i]+(float)b[i]*m/100;
			printf("*************************************\n");
			printf("+ Chi so sau tran dau:\n");
			printf("%-15s\t%-5s\t%-5s\t%-5s\n","Ten cua dau thu","SM","NN","Mau");
			printf("%-15s\t%-3.1f\t%-3.1f\t%-3.1f\n",sa, a[0],a[1],a[2]);
			printf("%-15s\t%-3.1f\t%-3.1f\t%-3.1f\n",sb, b[0],b[1],b[2]);
			printf("*************************************\n");
			break;
		}
	} while(a[2]>0&&b[2]>0);
}		
}

int main ()
{
	float a[3], b[3], c[3];//0 suc manh, 1 la nhanh nhen, 2 la mau
	char sa[20], sb[20], sc[20];
	a[0]=10;a[2]=100;b[0]=10;b[2]=100;
	srand((unsigned)time(NULL));
	printf("Nhap ten cua dau thu thu nhat:");
	scanf("%s",sa);
	printf("Nhap ten cua dau thu thu hai:");
	while(getchar()!='\n');
	scanf("%s",sb);
	printf("Nhap ten cua dau thu thu ba:");
	while(getchar()!='\n');
	scanf("%s",sc);
	a[0]=150;a[1]=100;a[2]=1000;b[0]=100;b[1]=95;b[2]=1800;c[0]=130;c[1]=105;c[2]=1500;//tu quy dinh.
	printf("\nChi so ban dau cua cac dau thu:\n");
	printf("%-11s\t%-8s\t%-12s\t%-5s\n","Ten dau thu","Suc manh","Nhanh nhen","Mau");
	printf("%-11s\t%-6.1f\t%-12.1f\t%-3.1f\n",sa,a[0],a[1],a[2]);
	printf("%-11s\t%-6.1f\t%-12.1f\t%-3.1f\n",sb,b[0],b[1],b[2]);
	printf("%-11s\t%-6.1f\t%-12.1f\t%-3.1f\n",sc,c[0],c[1],c[2]);
	arena(sa, a, sb, b);
	arena(sb, b, sc, c);
	arena(sa, a, sc, c);
	printf("Chi so cua cac dau thu sau cac tran dau la:\n");
	printf("%-15s\t%-5s\t%-5s\t%-5s\n","Ten cua dau thu","SM","NN","Mau");
	printf("%-15s\t%-3.1f\t%-3.1f\t%-3.1f\n",sa, a[0],a[1],a[2]);
	printf("%-15s\t%-3.1f\t%-3.1f\t%-3.1f\n",sb, b[0],b[1],b[2]);
	printf("%-15s\t%-3.1f\t%-3.1f\t%-3.1f\n",sc, c[0],c[1],c[2]);
	return 0;
}
