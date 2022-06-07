#include<stdio.h>
void main(){
    float r,ar,d,cir;
    printf("Enter the radius\n");
    scanf("%f",&r);
    d=r*2.0;
    ar=3.14*r*r;
    cir=2*3.14*r;
    printf("The diameter,circumference and area are %f,%f,%f respectively",d,cir,ar);
}