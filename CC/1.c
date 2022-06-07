#include<stdio.h>
void main(){
    int n,ld,sum=0,temp;
    scanf("%ld",&n);
    temp=n;
    while(n>0){
        ld=n%10;
        sum=sum*10+ld;
        n/=10;
    }
    if(sum==temp)
    printf("YES");
    else
    printf("NO");
}