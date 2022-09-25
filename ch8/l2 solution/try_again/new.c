#include <unistd.h> 
#include <stdio.h> 
#include <sys/stat.h> 
#include <dirent.h> 
#include <string.h> 
#include <stdlib.h> 
#include <stdbool.h> 


char compare_times[100][1000] ; 
int compare_times_ctr = -1 ; 
char delete_list[100][1000] ; 
int delete_ctr = -1 ; 

void compareFiles( char array[][100], DIR *mainDir_stream, DIR *syncDir_stream) ; 


int main(int argc, char *argv[]) {

    if (argc != 3){
        fprintf(stderr, "The program requires two additional command line arguments: main_directory, sync_directory\n") ;
        exit(1) ; 
    }




    DIR *mainDir_stream = opendir(argv[2]) ; 
    DIR *syncDir_stream = opendir(argv[1]) ; 

    struct dirent *mainDir_entry = readdir(mainDir_stream) ; 
    struct dirent *syncDir_entry = readdir(syncDir_stream) ;
    rewinddir(mainDir_stream) ; 
    int compare , ctr33 = 1 ;
    char filename[100] ; 


    while (syncDir_entry != NULL) {

        bool found = false ;
        
        mainDir_entry = readdir(mainDir_stream) ; 

        while (mainDir_entry != NULL) {

            if ((compare = strcmp(mainDir_entry->d_name, syncDir_entry->d_name)) == 0){
                found = true ; 
                rewinddir(mainDir_stream) ; 
                //puts("we have this!") ;
                //printf("%s %s\n", mainDir_entry->d_name, syncDir_entry->d_name) ; 
                break ; 
             }
             mainDir_entry = readdir(mainDir_stream) ; 
        }


        if (found){
            char *something = realpath(syncDir_entry->d_name, compare_times[++compare_times_ctr]) ; 
        }
        else{
            strcpy(delete_list[++delete_ctr], syncDir_entry->d_name) ; 
        }
        
        printf("file number %d\n", ctr33++) ; 

        //if we get here and found is still false, then we should delete whatever it was that was dragging us 
        //down  
        syncDir_entry = readdir(syncDir_stream) ;

    }



    for (int i = 0 ; i < 100; i++){

        if (compare_times[i][0] == '\0')
            break ; 

        printf("%s\n", compare_times[i]) ; 
    }


    for (int i = 0 ; i < 100; i++){

        puts("Here we are, just big chilling") ;

        if (delete_list[i][0] == '\0')
            break ; 

        printf("%s\n", delete_list[i]) ; 
    }






    return 0 ; 


} 
