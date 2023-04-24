#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct RollerCoaster{

    char name[31];
    char world[31];
    int height;
    int time;

} ROLLER_COASTER;

int cmp(const void *a, const void *b) {
    ROLLER_COASTER *left = (ROLLER_COASTER *) a;
    ROLLER_COASTER *right = (ROLLER_COASTER *) b;
     if(left->time != right->time) {
        return left->time - right->time;
    }

    if(left->height != right->height) {
        return - (left->height - right->height);
    }

    return strcmp(left->name, right->name);
}

int main() {
    char line[101];
    int n = atoi(gets(line));
    ROLLER_COASTER coasters[n];

    for(int i=0; i<n; i++) {
        gets(line);
        char *name = strtok(line, ";");
        char *world = strtok(NULL, ";");
        char *height = strtok(NULL, ";");
        char *time = strtok(NULL, ";");

        strcpy(coasters[i].name, name);
        strcpy(coasters[i].world, world);
        coasters[i].height = atoi(height);
        coasters[i].time = atoi(time);
    }
    printf("\n");

    qsort(coasters, n, 
        sizeof(ROLLER_COASTER), cmp);

    for(int i=0; i<n; i++) {
        printf("%s (%s): %d\n", 
            coasters[i].name,
            coasters[i].world,
            coasters[i].time);
    }



    return EXIT_SUCCESS;
}