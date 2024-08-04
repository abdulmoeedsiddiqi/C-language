#include<stdio.h>
void add(){
    
}
int main(){
    int choice;
    printf("Select 1 from the following\n1. Add\n2. Subtract\n3. Multiply\n4. Divide");
    scanf("%d",choice);
    switch(choice){
        case 1:
        add();
        break;

        case 2:
        subtract();
        break;
        case 3:
    Multiply();
    break;

    case 4:
    divide();
    break;

    default:
    printf("Invalid choice");
    }


    return 0;
}
