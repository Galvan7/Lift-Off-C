#include<stdio.h>

int larr(int arr[],int n){
    int big=arr[0];
    int i;
    for(i=1;i<n;i++){
        if(arr[i]>big)
        big=arr[i];
    }
    return big;
}

void main(){
    int arr[100];
    int n,i;
    printf("Enter size of array followed by elements\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("LARGEST ELEMENT IS %d",larr(arr,n));
}