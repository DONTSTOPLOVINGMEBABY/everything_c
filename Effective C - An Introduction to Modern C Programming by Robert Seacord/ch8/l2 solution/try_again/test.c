#include <unistd.h> 
#include <stdio.h> 
#include <sys/stat.h> 
#include <dirent.h> 
#include <string.h> 
#include <stdlib.h> 



int main(int argc, char *argv[]) {


    char bigarray[1000][1000] ; 

    DIR *directory1 = opendir(argv[1]) ; 
    struct dirent *entity = readdir(directory1) ; 
    int ctr = 0;          

    while (entity != NULL) {

        strcpy(bigarray[ctr], entity->d_name ) ;  
        entity = readdir(directory1) ; 
        ctr++; 

    }
    
    for (int i = 0 ; i < 1000 ; i++){
        
        
        
        printf("%s\n", bigarray[i]) ; 

        if (bigarray[i][0] == '\0')
            break ; 
        
    }

    return 0 ; 

}