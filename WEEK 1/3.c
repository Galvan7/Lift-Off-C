#include<stdio.h>
void main(){
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);

    switch(n%2){
        case 0:
        printf("The number is even");
        break;

        case 1:
        printf("The number is odd");
        break;
    }

}