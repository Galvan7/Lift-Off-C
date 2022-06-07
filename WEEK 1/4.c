#include<stdio.h>
void main(){
    int a,b;
    char ch;
    printf("Enter the numbers followed by operation of choice. Use A,S,M,D for add,substract,multiply and divide respectively\n");
    scanf("%d%d",&a,&b);
    scanf("%*c%c",&ch);
    switch (ch)
    {
        case 'A':
        printf("%d",a+b);
        break;
        case 'S':
        printf("%d",a-b);
        break;
        case 'M':
        printf("%d",a*b);
        break;
        case 'D':
        printf("%d",a/b);
        break;
        default:
        printf("No such operation possible as of yet but we are definitely working on it\n");
        break;
    }
}