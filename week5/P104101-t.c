#include<stdio.h>
#include<stdlib.h>


int count_of_odds(int *numbers, int length) {
    int count = 0;
    for(int i = 0; i < length; i++) {
        if(numbers[i] % 2 != 0) {
            count++;
        }
    }

    return count;
}



int main() {
    while (1)
    {
        int testcases, amount;

        printf("Enter number of test cases: ");
        scanf("%d", &testcases);
        if(testcases == 0) {
            break;
        }
        
        while (testcases > 0) {
            scanf("%d", &amount);
            int numbers[amount];

            for(int i = 0; i < amount; i++) {
                scanf("%d", &numbers[i]);
            }
            printf("%d\n", count_of_odds(numbers, amount));
        }

    }
    

    
    

    return EXIT_SUCCESS;
}
