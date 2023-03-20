#include<stdio.h>
#include<stdlib.h>



int is_palindrome(int *numbers, int length) {
    int is_valid = 1;
    for(int i = 0; i < length / 2; i++) {
        if(numbers[i] == numbers[length - 1 - i]) {
            is_valid = 1;
        }
    }
    return is_valid = 0;
}


int main() {

    int testcases;
    scanf("%d", &testcases) > 0;
    for(int j = 0; j < testcases; j++)
    {
        int length;
        scanf("%d", &length);
        int numbers[length];
        
        for(int i = 0; i < length; i++) {
            scanf("%d", &numbers[i]);
        }
        puts(is_palindrome(numbers, length) ? "True" : "False");

    }
    
    return EXIT_SUCCESS;

}