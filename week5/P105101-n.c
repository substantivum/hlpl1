#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


char *delete_spaces(char *mystring) {
    char *result = (char *) calloc(strlen(mystring) + 1, sizeof(char));
    int position = 0;
    for(int i = 0; i < strlen(mystring) + 1; i++) {
        if(mystring[i] != ' ') {
            result[position] = mystring[i];
            position++;
        }
    }
    return result;

}

int main() {

    char line[101];
    gets(line);
    int n = atoi(line);
    for(int i = 0; i < n; i++) {
        gets(line);
        char *result = delete_spaces(line);
        puts(result);
        free(result);
    }
    return EXIT_SUCCESS;
}