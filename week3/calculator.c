#include <stdio.h>

int main(){

    int a, b, d;
    char c;
    printf("Enter your problem: ");
    scanf("%d %c %d", &a, &c, &b);

    switch (c)
    {
    case '+':
        printf("Result is %d", a+b);
        break;
    
    case '-':
    printf("Result is %d", a-b);
        break;

    case '*':
    printf("Result is %d", a*b);
        break;

    case '/':
    d = a/b;
    printf("Result is %f", d);
        break;

    case '%':
    printf("Result is %d", a%b);
        break;
    
    default:
        break;
    }
}