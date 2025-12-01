#include <stdio.h>

int main() {
    float a, b;
    char op;
    printf("Enter: number operator number\n");
    scanf("%f %c %f", &a, &op, &b);

    switch(op) {
        case '+': printf("Result = %.2f", a + b); break;
        case '-': printf("Result = %.2f", a - b); break;
        case '*': printf("Result = %.2f", a * b); break;
        case '/': printf("Result = %.2f", a / b); break;
        default: printf("Invalid operator");
    }
}
