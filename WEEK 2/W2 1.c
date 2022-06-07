#include<stdio.h>
#include<string.h>
void main(){
    char arr[100],str[100],ans[200];
    gets(arr);
    gets(str);
    strcat(arr,str);
    int k=strlen(arr);
    for(int i=k-1;i>=0;i--){
        printf("%c",arr[i]);
    }
}