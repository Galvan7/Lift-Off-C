#include<stdio.h>
void main(){
    char name[50],dept[50],hob[200];
    long int regd;
    printf("Enter name followed by regd no,branch and hobbies\n");
    gets(name);
    scanf("%ld",&regd);
    gets(dept);
    gets(hob);
    printf("The details entered are as follows\n");
    printf("Name is %s\n",name);
    printf("Roll is %ld\n",regd);
    printf("Branch is %s\n",dept);
    printf("Hobbies are %s",hob);
}