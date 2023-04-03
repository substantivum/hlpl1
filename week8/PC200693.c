#include <stdio.h>
#include <stdlib.h>

int main(int args, char *array[]) {

    double result = atof(array[1]);
    for(int i = 2; i < args; i++) {
        result += atof(array[i]);
    }
    result = result/(args-1);
    printf("%.2f\n", result);

    return EXIT_SUCCESS;

}