#include<stdio.h>

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void main(){
    int a,b;
    printf("Enter two numbers to be swapped\n");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("THE SWAPPED NUMBERS ARE %d and %d",a,b);

}