#include<stdio.h>
#include<stdbool.h>

bool prime(int n,int x){
    if(n==x){
        return true;
    }
    else if(n%x==0){
        return false;
    }
    else{
        return prime(n,x+1);
    }
}

void main(){
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    if(prime(n,2))
    printf("THE NUMBER IS PRIME\n");
    else
    printf("THE NUMBER IS NOT A prime\n");
}