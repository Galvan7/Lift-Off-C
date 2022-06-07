#include<stdio.h>
void main(){
    int arr[10];
    int os=0,es=0;
    printf("Enter the integers\n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++){
        if(arr[i]%2==0)
        es+=arr[i];
        else
        os+=arr[i];
    }
    printf("Even sum is %d",es);
    printf("\nOdd sum is %d",os);
}