#include <stdio.h> 
#include <string.h> 

int main( int argc, char *argv[] ) {

    
    char buf[2048] ;

    if (argc < 2) {
    while ((fgets(buf, 2048, stdin)) != NULL){
        fputs(buf, stdout) ; 
        }
    }
    
    
    else if (argc < 3) {
        FILE *fileIN = fopen(argv[1], "r") ; 

        while ((fgets(buf, 2048, fileIN)) != NULL){  
            fputs(buf, stdout) ; 
        }
        fclose(fileIN) ;
    }


    else {

    FILE *fileOUT = fopen(argv[argc - 1], "a") ; 
   

    for (int i = 1 ; i < argc - 1 ; i++) {
        FILE *fileIN = fopen(argv[i], "r") ; 

        while ((fgets(buf, 2048, fileIN)) != NULL){  
            fputs(buf, fileOUT) ; }

        fflush(fileIN) ; 
        fclose(fileIN) ;        
        }
    }
    

    return 0 ; 
}