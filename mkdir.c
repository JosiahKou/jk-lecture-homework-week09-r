#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/stat.h>

int main(int argc, char *argv[]) {
    int r;
    int i;
    
    if (argc < 2) {
        printf("Usage: %s dirname [dirname2 ...]\n", argv[0]); 
        exit(1);
    }

    for (i = 1; i < argc; i++) {
        if ((r = mkdir(argv[i], 0755)) < 0) {
            perror("mkdir"); // print error message
        }
    }
    
    return 0;
}