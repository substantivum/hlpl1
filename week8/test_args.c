#include <stdio.h>
#include <stdlib.h>

int main(int args, char *argv[]) {
    printf("Hello world");
    printf("%d\n", args);

    for(int i = 0; i<args; i++) {
        printf("#%d %s %p\n", i, argv[i], argv[i]);
    }

    return EXIT_SUCCESS;
}