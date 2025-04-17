#include<stdio.h>
int main(){int j, num, a[32],i=0;
    
    printf("enter Decimal number");
    scanf("%d",&num);
    while(num!=0){
        a[i]=num%2;
        i++;
        num/=2;
    }
    for(j=i-1;j>0;j--){
        printf("%d",a[j]);
    }
}