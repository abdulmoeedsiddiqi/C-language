#include<stdio.h>
int main(){
    int obtained_marks , total_marks ;
    float percentage ;
    printf("Enter your obtained marks: "); scanf("%d",&obtained_marks);
    printf("Enter your total marks: "); scanf("%d", &total_marks);
    percentage= (obtained_marks * 100)/ total_marks ;
    printf("Your percentage is: %f", percentage);
    
    return 0;
}