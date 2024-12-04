#include <stdio.h>

void add();
void subtract();
void multiply();
void divide();

int main(){
    int choice;

    while(1){
    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. subtraction\n");
    printf("3. multiplication\n");
    printf("4. division\n");
    printf("5. exit\n");
    printf("Select operation\n");
    scanf("%d" ,&choice);
        switch (choice){
            case 1:
                add();
                break;
            case 2:
                subtract();
                break;
            case 3:
                multiply();
                break;
            case 4:
                divide;
                break;
            case 5:
                return 0;
            default:
                printf("Invalid Choice\n");
        }
    }
}

void add(){
        double a,b;
        printf("Enter two numbers\n");
        scanf("%lf, %lf" ,&a , &b);
        printf("Result: 2%lf\n" ,a + b );
}
void subtract(){
        double a,b;
        printf("Enter two numbers\n");
        scanf("%lf, %lf" ,&a , &b);
        printf("Result: 2%lf\n" ,a - b );
}
void multiply(){
        double a,b;
        printf("Enter two numbers\n");
        scanf("%lf, %lf", &a , &b);
        printf("Result: 2%lf\n" ,a * b );
}
void dividedddd(){
    double a,b;
    printf("Enter two numbers\n");
    scanf("%lf, %lf", &a , &b);
    if (b != 0){
        printf("Result: 2%lf\n" ,a / b );
    } else{
        printf("Divisor cant be 0\n");
    }
}