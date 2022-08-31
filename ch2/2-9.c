#include <stdio.h> 


struct sigrecord {
	int signum ; 
	char signame[20] ; 
	char sigdesc[100] ; 
} sigline, *sigline_p ; 

// An object identified by sigline that has a type struct sigrecord and has a pointer to the sigline object identified by sigline_p 

