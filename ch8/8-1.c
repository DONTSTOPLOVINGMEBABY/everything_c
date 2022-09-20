#include <fcntl.h> 
#include <sys/stat.h>
#include <stdio.h> 
#include <stdlib.h> 


int main()
{

	int fd ; 
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH ; 
	const char *pathname = "econ-final-paper.txt" ; 


	// The mode flag is a bitwise-inclusive or of mode bits for access permission  
	

	if ((fd=open(pathname, O_WRONLY | O_CREAT | O_TRUNC, mode)) == -1)
	{
		fprintf(stderr, "Can't open %s.\n", pathname) ; 
		puts("We hit the error") ; 
		exit(1) ; 
	}


	// Call to open takes a pathname, the oflag, and the mode
	// File access mode = O_WRONLY which means file is opened only for writing
	// O_CREAT file status flag informs open to create the file
	// O_TRUNC informs open that if the file exists and is successfully opened, it should discard previous contents of file but retain the identifier. 


	puts("Program finished normal execution... No errors") ; 


	return 0 ; 
} 

