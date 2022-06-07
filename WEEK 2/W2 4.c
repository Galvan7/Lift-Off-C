#include<stdio.h>
int main(){
    int n;
    printf("Enter no of terms in fibonacci starting with 1 & 0 ");
    scanf("%d",&n);
    int a=0;
    int b=1;
    int sum;

    for(int i=1;i<=n;i++){
        printf("%d\n",a);
        sum=a+b;
        a=b;
        b=sum;
    }
    return 0;

    }