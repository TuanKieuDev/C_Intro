#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int choose;
    do{
        printf("MENU\n");
        printf("1.SIN X (S)\n");
        printf("2.SQRT X (C)\n");
        printf("3.EXP X (E)\n");
        printf("4.EXIT (T)\n");
        printf("Enter your selection: ");
        scanf("%d",&choose);
	int i,j,n,fact,sign =  - 1;
              float x, p, sum = 0;
        switch(choose){
            
            case 1:;
                printf("Enter the value of x : ");
                  scanf("%f", &x);
                  printf("Enter the value of n : ");
                  scanf("%d", &n);
                  for (i = 1; i <= n; i += 2)
                  {
                    p = 1;
                    fact = 1;
                    for (j = 1; j <= i; j++)
                    {
                         p = p * x;
                          fact = fact * j;
                    }
                    sign =  - 1 * sign;
                    sum += sign * p / fact;
                      }
                  printf("sin %0.2f = %f", x, sum);
                  printf("\n");
                break;
            case 3:;
                float exp_sum = 1;  
                printf("Enter the value of n : ");
                  scanf("%d", &n);   
                  printf("Enter the value of x : ");
                  scanf("%f", &x);
                for (i = n - 1; i > 0; --i ) 
                    exp_sum = 1 + x * exp_sum / i;
                printf("value of n = %d and x = %f ", n, x );
                printf("\ne^x = %f\n",exp_sum); 
                break;
    }            
    }while(choose!=4);
    return 0;
}
