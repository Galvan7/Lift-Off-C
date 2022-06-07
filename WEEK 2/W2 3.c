#include<stdio.h>
#include<math.h>
void main(){
    long int n,nn;
    int f,e,d,l;
       scanf("%ld",&n);
       l=log10(n);
    d=pow(10,l);
    f=n/d;
    n=n%d;
    e=n%10;
    n/=10;
    nn=e*d+n*10+f;
    printf("%ld\n",nn);
}