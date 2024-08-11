#include<stdio.h>
#include<math.h>
int main(){
    int n, check=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n==1 || n==0){
        check=1;
    }
    else{
        int i=2;
    do{
        if(n%i==0 && n!=2){
            check=1;
            break;
        }
        i++;
    }while( i <= sqrt(n) );
    }

    if(check){
      printf("%d is a not a prime number.",n);
    }
    else{
        printf("%d is a prime number.",n);
    }
    return 0;
}




