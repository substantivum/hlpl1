#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int args, char *array[]) {
    int min_length = strlen(array[1]);
    for (int i = 1; i < args; i++)
    {
        if (strlen(array[i]) < min_length)
        {
            min_length = strlen(array[i]);
        }
    }

    for (int i = 1; i < args; i++)
    {
        if (strlen(array[i]) == min_length)
        {
            puts(array[i]);
        }
    }


    return 0;

}