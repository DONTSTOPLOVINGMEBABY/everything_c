#include <unistd.h> 
#include <stdio.h> 
#include <sys/stat.h> 
#include <dirent.h> 
#include <string.h> 
#include <stdlib.h> 


int main(int argc, char *argv[]){

    DIR *this_directory = opendir(".") ; 
    struct dirent *entity ; 
    char *this_file = "clean.c" ; 
    entity = readdir(this_directory) ;

    while (entity != NULL){

        if (strcmp(entity->d_name, this_file) !=0){
            remove(entity->d_name) || unlink(entity->d_name) ; 
        }

        entity = readdir(this_directory) ; 

    }
    


    return 0 ; 
}