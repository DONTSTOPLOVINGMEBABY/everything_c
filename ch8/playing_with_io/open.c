#include <stdio.h>
#include <fcntl.h> 
#include <sys/stat.h> 
#include <unistd.h> 
#include <stdlib.h> 

int main(int argc, char *argv[]) {

    mode_t mode = S_IRUSR | S_IWUSR | S_IXUSR | S_IRGRP | S_IWGRP | S_IXGRP | S_IROTH | S_IWOTH | S_IXOTH ;
    //int file = open(argv[1], O_RDWR | O_CREAT | O_APPEND, mode ) ;
    int file2 = open("created_from_open.txt", O_CREAT, 0700) ; 

    	
    if (file2 == -1)   {
	    printf("One of the files didn't open. Exiting the program...\n") ; 
	    exit(1) ; 
    } 


    write(file2, "Hello, World!\n", 14) ; 


    // Is write the only way to write to a file descriptor? 


    //close(file) ; 
    close(file2); 





    return 0 ; 
}
