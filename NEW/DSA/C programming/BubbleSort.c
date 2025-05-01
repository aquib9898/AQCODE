#include<stdio.h>
int main(){int n,i,j,arr[30],temp;

    printf("enter array length");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;

            }
        };
    }
    printf("\n");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}