#include <unistd.h> 
#include <stdio.h> 
#include <sys/stat.h> 
#include <dirent.h> 
#include <string.h> 
#include <stdlib.h> 
#include <libgen.h> 


void makepath(char *path_pointer, char *directory, char *file_name) ;


int main(int argc, char *argv[]) {

    DIR *directory_open = opendir(argv[1]) ; 
    struct dirent *entity = readdir(directory_open) ; 
    entity = readdir(directory_open) ; 
    entity = readdir(directory_open) ; 

    printf("%s\n", entity->d_name) ;  
    char *path_pointer = realpath(argv[1], NULL) ; 
    strcat(path_pointer, "/") ; 
    strcat(path_pointer, entity->d_name) ;
    printf("%s\n", path_pointer) ;


    /*

    printf("Listing all the files for %s\n", argv[1]) ; 
    while (entity != NULL){
        printf("%s\n", entity->d_name) ; 
        entity = readdir(directory_open) ; 
    }

    */



    return 0 ;
}
