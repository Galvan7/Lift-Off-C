#include<stdio.h>
#include<stdbool.h>

bool even(int n){
    if(n%2==0){
        return true;
    }
    return false;
}
void main(){
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    if(even(n))
    printf("THE NUMBER IS EVEN");
    else
    printf("THE NUMBER IS ODD");
}