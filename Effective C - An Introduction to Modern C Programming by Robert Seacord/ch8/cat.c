#include <stdio.h> 
#include <string.h> 

int main( int argc, char *argv[] ) {

    char buf[2048] ; 


    if (argc < 2) {
    while ((fgets(buf, 2048, stdin)) != NULL){
        fputs(buf, stdout) ; 
        }
    }
    
    if (argc < 3){
        FILE *fileIN = fopen(argv[1], "r") ; 

        while ((fgets(buf, 2048, fileIN)) != NULL){  
            fputs(buf, stdout) ; 
        }
        fclose(fileIN) ; 
    }

    if (argc < 4) {
        FILE *fileIN = fopen(argv[1], "r") ; 
        FILE *fileOUT = fopen(argv[2], "w") ; 

        while ((fgets(buf, 2048, fileIN)) != NULL){  
            fputs(buf, fileOUT) ; 
        }
        fclose(fileIN) ; 
        fclose(fileOUT) ; 
    }


    return 0 ; 
}