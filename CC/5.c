#include<stdio.h>
#include<string.h>

void main(){
    char str[200];
    gets(str);
    int i;
    int count=0;
    int z=0,o=0;
    for(i=0;str[i]!=NULL;i++){
        if(str[i]=='0')
        z++;
        else 
        o++;
    }
    if(z>o){
        printf("%d",z);
    }
    else if(o>z){
        printf("%d",o);
    }
    else
    printf("0");
 }