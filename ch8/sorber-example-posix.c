#include <sys/types.h>
#include <sys/stat.h> 
#include <fcntl.h> 
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> 



int main()
{

	int fd_to_read = open("the_text.txt", O_RDONLY) ; 
	int fd_to_write = open("newtext2.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR ) ; 

	if (fd_to_read == -1 || fd_to_write == -1) {
		printf("One file wouldn't open!\n") ; 
		return -1 ; 
	} 


	char c ; 
	int bytes ; 
	while (bytes = read(fd_to_read, &c, sizeof(c)) > 0) {
		if (c == '!') {
			c = 'Q' ; 
		}

		write(fd_to_write, &c, sizeof(c)) ; 
	} 

	close(fd_to_write) ; 
	close(fd_to_write) ; 


	return 0 ;




}
