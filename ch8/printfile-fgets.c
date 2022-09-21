#include <stdio.h> 
#include <stdlib.h> 

int main(int argc, char *argv[]){


 
    FILE *file = fopen(argv[1], "r") ;
    FILE *file2 = fopen(argv[2], "w") ; 

    char buf[2048] ; 

    while ((fgets(buf, 2048, file)) != NULL) {

        fputs(buf, file2) ; 

    }


    fclose(file) ; 
    fclose(file2) ; 


    return 0 ; 
}