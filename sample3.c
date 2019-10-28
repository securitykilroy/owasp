#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#define BUFFSIZE 512

int main(int argc, char **argv) {
    char *buffer1;
    char *buffer2;
    char *buffer3;
    char *buffer4;
    buffer1 = (char *) malloc(BUFFSIZE);
    buffer2 = (char *) malloc(BUFFSIZE);
    free(buffer2);
    buffer3 = (char *) malloc(BUFFSIZE);
    buffer4 = (char *) malloc(BUFFSIZE);
    strcpy(buffer2, argv[1]);
    free(buffer1);
    free(buffer3);
    free(buffer4);

    return 0;
}