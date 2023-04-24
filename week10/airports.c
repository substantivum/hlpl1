#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    char name[31];
    char city[31];
    int runways;
    int time;
} AIRPORTS;


int cmp(const void *a, const void *b) {
    AIRPORTS *left = (AIRPORTS *) a;
    AIRPORTS *right = (AIRPORTS *) b;

    if(left->runways != right->runways) {
        return - (left->runways - right->runways);
    }

    if(left->time != right->time) {
        return - (left->time - right->time);
    }

    return strcmp(left->name, right->name);
}

int query(AIRPORTS *airports, int length)
 {
    int max = airports[0].runways;
    for(int i = 1; i<length; i++) {
        if(airports[i].runways > max) {
            max = airports[i].runways;
        }
    }
    return max;
 }


int main(int argc, char *argv[]) {

    if(argc < 2) {
        fprintf(stderr, "No file name was given!\n");
        return 1;
    }

    FILE *fim = fopen(argv[1], "r");
    if(! fim) {
        fprintf(stderr, "The file cannot be opened!\n");
        return 2;
    }


    char line[102];
    AIRPORTS airports[20];
    int length = 0;

    while(fgets(line, 102, fim)) {
        line[strlen(line) - 1] = '\0';
        strcpy(airports[length].name, strtok(line, ";"));
        strcpy(airports[length].city, strtok(NULL, ";"));
        airports[length].runways = atoi(strtok(NULL, ";"));
        airports[length].time = atoi(strtok(NULL, ";"));
        length++;

    }

    qsort(airports, length, sizeof(AIRPORTS), cmp);

    fclose(fim);

    if(argc < 3) {
        fprintf(stderr, "Second argument went missing\n");
        return 3;
    }

    FILE *fout = fopen(argv[2], "w");
    if(!fout) {
        fprintf(stderr, "Second file cannot be open!");
        return 4;
    }

    for(int i = 0; i < length; i++) {
        fprintf(fout, "%s;%s;%d;%d\n", airports[i].name, airports[i].city, airports[i].runways, airports[i].time);
    
    }

    fclose(fout);


    return EXIT_SUCCESS;
}