#include <stdio.h>
#include <math.h>

int main() {
    int num;
    scanf("%d", &num);

    if(num == 2) {
        printf("The number is prime");
    }

    else if (num % 2 == 0 || num > 2)
    {
        printf("The number is not prime");
    }
    else {
        for (int i = 3; i <= sqrt(num); i+=2) {
            if (num % i == 0) {
                printf("The number is not prime");
            }
            else {
                printf("The number is prime");
        }
    }
    

}