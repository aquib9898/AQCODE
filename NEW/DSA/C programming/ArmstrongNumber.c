#include<stdio.h>
#include<math.h>
int main(){int num, n=0 ,remainder,sum=0 ,copy ;
    printf("enter a number");
    scanf("%d",&num);
    copy=num;
    while(num!=0){
        num/=10;
        n++;
    }
    num=copy;
     while(copy!=0){
        remainder=copy%10;
        sum+= (int)round(pow(remainder,n));
        copy/=10;
     }

     if(sum==num){printf("number is an armstrong number");}else{printf("number is not an armstrong number");}
}