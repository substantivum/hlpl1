#include <stdio.h>
#include <stdlib.h>

int main(int length, char *array[]) {
    int result = atoi(array[1]);
    for(int i = 0; i < length; i++) {
        if(result < atoi(array[i])) {
            result = atoi(array[i]);
        }
    }
    printf("%d", result);

}