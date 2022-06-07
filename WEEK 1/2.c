#include<stdio.h>
void main(){
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    (a>b)?printf("%d",a):printf("%d",b);
}