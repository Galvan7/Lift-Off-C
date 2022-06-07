#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool prime(long int n){
    long int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    if(i==n){
        return true;
    }
}
bool magic(long int n){
    long int ld,temp,sum=0;
    temp=n;
    while(n>0){
        ld=n%10;
        sum=sum*10+ld;
        n/=10;
    }
    if(sum==temp){
        return true;
    }
    else{
        return false;
    }
}

void main(){
    long int n,i;
    scanf("%ld",&n);
    i=n;
    while(1){
        if(magic(i)&&prime(i)){
            printf("%ld",i);
            break;
        }
        i++;
    }
    
}
