#include<stdio.h>
int main(){
    int i,j,k,c=0;
    for(i=5;i>=1;i--){


        for(j=1;j<=c;j++){
            printf(" ");

        }
        c++;

        for(k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
}