#include <unistd.h> 
#include <stdio.h> 
#include <sys/stat.h> 
#include <dirent.h> 
#include <string.h> 
#include <stdlib.h> 

int longest_file_name = 0 ;  

int countFiles(DIR *directory, struct dirent *entity) ;

void loadFiles( char array[][longest_file_name], DIR *directory, struct dirent *entity) ; 





int main(int argc, char *argv[]) {

    if (argc != 3){
        fprintf(stderr, "The program requires two additional command line arguments: main_directory, sync_directory\n") ;
        exit(1) ; 
    }

    //Set directory name variables
    char mainDir[strlen(argv[1])], syncDir[strlen(argv[2])] ; 
    strcpy(mainDir, argv[1]) ; strcpy(syncDir, argv[2]) ; 

    //Set Directory Stream and Directory Entry Variables
    DIR *mainDir_stream = opendir(argv[1]) ; 
    DIR *syncDir_stream = opendir(argv[2]) ; 
    struct dirent *mainDir_entry = readdir(mainDir_stream) ; 
    struct dirent *syncDir_entry = readdir(syncDir_stream) ; 


    //Create arrays for filenames that fit just enough files
    //Might be of very little consequence but whatever 
    //Initialize Arrays, and load file names into arrays for comparison
    int numberFiles_mainDir = countFiles(mainDir_stream, mainDir_entry) ; 
    int numberFiles_syncDir = countFiles(syncDir_stream, syncDir_entry) ; 
    char mainDir_files[numberFiles_mainDir][longest_file_name]  ; 
    char syncDir_files[numberFiles_syncDir][longest_file_name]  ; 
    loadFiles(mainDir_files, mainDir_stream, mainDir_entry) ; 
    loadFiles(syncDir_files, syncDir_stream, syncDir_entry) ; 

   
   
    for (int i = 0 ; i < numberFiles_mainDir ; i++){
        printf("%s\n", mainDir_files[i]) ; 
    } 

    puts("Now for another directory\n\n"); 

    for (int i = 0 ; i < numberFiles_syncDir ; i++){
        printf("%s\n", syncDir_files[i]) ; 
    } 
   


    return 0 ; 
}


void loadFiles( char array[][longest_file_name], DIR *directory, struct dirent *entity){

    int array_ctr = 0 ; 
    while (entity != NULL){

        strcpy(array[array_ctr], entity->d_name) ; 
        entity = readdir(directory) ; 
        array_ctr++ ;
    }

    rewinddir(directory) ;  

}

int countFiles(DIR *directory, struct dirent *entity) {

    int file_ctr = 0 ;   
    while (entity != NULL){
        file_ctr += 1 ; 

        if (strlen(entity->d_name) > longest_file_name)
            longest_file_name = strlen(entity->d_name) + 1 ; 

        entity = readdir(directory) ; 
    }
    
    rewinddir(directory) ; 
    return file_ctr ; 
    
}

/* Print our arrays if needed

for (int i = 0 ; i < numberFiles_mainDir ; i++){
        printf("%s\n", mainDir_files[i]) ; 
    } 

    puts("Now for another directory\n\n"); 

    for (int i = 0 ; i < numberFiles_syncDir ; i++){
        printf("%s\n", syncDir_files[i]) ; 
    } 

     
    
    struct stat buf ; 

    for (int i = 0 ; i < numberFiles_mainDir ; i++){
        printf("%s ", mainDir_files[i]) ; 
        int k = stat(mainDir_files[i], &buf) ; 
        time_t hhgreg = buf.st_mtime ; 
        printf("%lld ", hhgreg) ;
        printf("%d\n", k); 
    } 


*/ 