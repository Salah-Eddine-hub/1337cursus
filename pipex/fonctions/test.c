#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {

    int i =1 ;

    // Argument list for first call
    i1 = i ;
    char *prog1[argc];
    while (strcmp(argv[i], "+") != 0) {
            prog1[i-i1] = argv[i];
            i++;
    }
    prog[i-1] = NULL ;

    // Argument list for second call
    int i2 = i ;
    char *prog2[argc];
    whlie ( i < argc ) {
        prog2[i-i2] = argv[i];
    }
    prog2[i-i2] = NULL ;

    pid_t pid1 = fork();
    if ( pid1 == 0) {
        execvp(prog1[0], prog1);
        exit(0);
    }

    pid_t pid2 = fork() ;
    if ( pid2 == 0) {
        execvp(prog2[0], prog2);
        exit(0);
    }

    // Wait for all childs
    int status ;
    while ( wait(&status) ) { } 

    exit(0);
}