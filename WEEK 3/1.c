#include<stdio.h>

int gcd(int a,int b){
	if(b!=0){
		return gcd(b,a%b);
	}
	else{
		return a;
	}
}
void main(){
	int a,b;
	printf("Enter the two numbers larger first\n");
	scanf("%d%d",&a,&b);
	printf("GCD is %d",gcd(a,b));
}