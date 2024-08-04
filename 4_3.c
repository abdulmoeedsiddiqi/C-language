#include<stdio.h>
int main(){
    int n1,n2;
    printf("Enter a number: ");
    scanf("%d",&n1);
    if(n1%2==0){
        printf("%d is even.",n1);
    }
    else{
        printf("%d is odd.",n1);

    }
    return 0;
}