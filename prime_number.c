#include<stdio.h>
#include<math.h>
int main(){
    int n, check=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=2; i<=sqrt(n) ; i++){
        if(n%i==0){
            check=1;
            break;
        }
    }

    if(check){
      printf("%d is a not a prime number.",n);
    }
    else{
        printf("%d is a prime number.",n);
    }
    return 0;
}