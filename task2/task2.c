#include <stdio.h>
#include <stdlib.h>

/* FUNCTIONS */
int add(int a, int b) {
    printf("Adding 'a' and 'b'\nx = %d\n", a + b);
    return a + b;
}

int subtract(int a, int b) {
    printf("Subtracting 'b' from 'a'\nx = %d\n", a - b);
    return a - b;
}

int multiply(int a, int b) {
    printf("Multiplying 'a' and 'b'\nx = %d\n", a * b);
    return a * b;
}

int divide(int a, int b) {
    printf("Dividing 'a' by 'b'\nx = %d\n", a / b);
    return a / b;
}

int exit_prog(int a, int b) {
    exit(0);
    return 0; 
}

int main() {
    int a = 6;
    int b = 3;
    int choice;

    // Array of function pointers
    int (*operations[5])(int, int) = {add, subtract, multiply, divide, exit_prog};

    printf("Operand 'a' : %d | Operand 'b' : %d\n", a, b);
    printf("Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit): ");
    
    scanf("%d", &choice);

    // Execute the chosen function (no if-statements or switch-cases allowed)
    operations[choice](a, b);

    return 0;
}