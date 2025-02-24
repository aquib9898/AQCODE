#include<stdio.h>
void main(){
    int a=0,b=1,n,i,next;
    printf("enter number to print");
    scanf("%d",&n);
    if(n==1){printf(" %d ",a);}else if(n==2){printf(" %d %d ",a,b); }
    else{ printf("%d %d ",a,b);
        for(i=3;i<=n;i++){
            next=a+b;
            printf("%d ",next);
            a=b;
            b=next;
            
        }
    }
}