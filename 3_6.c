#include<stdio.h>
int main(){
    int age ;
    char name[30];
    printf("Enter name: ");// scanf("%c",name);
gets(name);
printf("Enter your age in years: ");
scanf("%d",&age);
printf("Your age in months are %d",  12*age);
    return 0;
}