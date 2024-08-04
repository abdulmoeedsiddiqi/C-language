#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n>50){
        printf("%d is greater than 50",n);
    }
    else if(n<50){
        printf("%d is smaller than 50",n);
    }
    else{
        printf("%d is equal to 50.",n);
    }
    return 0;
}