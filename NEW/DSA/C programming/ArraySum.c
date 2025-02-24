#include<stdio.h>
int main(){int i, a[10][10] , b[10][10] , sum[10][10],d,j;

    printf("enter dimensions of array");
    scanf("%d",&d);
    printf("enter first array elements \n" );
    for(i=0;i<d;i++){
        for(j=0;j<d;j++){
            scanf("%d",&a[i][j]);
        }}
        printf("your array is \n");
        for(i=0;i<d;i++){
            for(j=0;j<d;j++){
                printf("%d",a[i][j]);
            }
        printf("\n");
    }
    printf("enter second array \n");
    for(i=0;i<d;i++){
        for(j=0;j<d;j++){
            scanf("%d",&b[i][j]);
        }}
        printf("your array is \n");
        for(i=0;i<d;i++){
            for(j=0;j<d;j++){
                printf("%d",b[i][j]);
            }
        printf("\n");}

        printf("your sum of arrays is \n");


    for(i=0;i<d;i++){
        for(j=0;j<d;j++){
            sum[i][j]=a[i][j]+b[i][j];}}

         for(i=0;i<d;i++){
                for(j=0;j<d;j++){
                    printf("%d",sum[i][j]);
                }
                printf("\n");
            }

            
        

        }
    





