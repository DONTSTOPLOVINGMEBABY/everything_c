#include <unistd.h> 
#include <stdio.h> 
#include <sys/stat.h> 
#include <dirent.h> 
#include <string.h> 
#include <stdlib.h> 


int main(int argc, char *argv[]) {

    if (argc != 3){
        fprintf(stderr, "The program requires two additional command line arguments: main_directory, sync_directory\n") ;
        exit(1) ; 
    }



    return 0 ; 


} 
