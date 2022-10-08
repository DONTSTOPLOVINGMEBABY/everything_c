#include <stdio.h>
#include <stdlib.h>




int main(int argc, char *argv[]){


 
    FILE *file = fopen(argv[1], "r") ;
    FILE *file2 = fopen(argv[2], "w") ; 
   
    char c ; 
    while ((c = fgetc(file)) != EOF) {
        fputc(c, file2) ; 
    }

    fclose(file) ; 
    fclose(file2) ; 

    return 0 ; 
}