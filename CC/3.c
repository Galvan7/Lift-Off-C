#include<stdio.h>
#include<string.h>
void main(){
    char str[100];
    gets(str);
    int count=0;
    char c;

    for(c='A';c<='Z';c++){
        count=0;
        for(int i=0;str[i]!=NULL;i++){
            if(c==str[i])
            count++;
        }
        if(count!=0)
        printf("%c -> %d\n",c,count);
    }

    for(c='a';c<='z';c++){
        count=0;
        for(int i=0;str[i]!=NULL;i++){
            if(c==str[i])
            count++;
        }
        if(count!=0)
        printf("%c -> %d\n",c,count);
    }
}