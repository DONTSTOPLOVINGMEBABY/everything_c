#include <stdio.h> 
#include <string.h> 

struct sigrecord {
	int signum ; 
	char signame[20] ; 
	char sigdesc[100] ; 
} sigline, *sigline_p ; 

// This is the same as saying :
// struct sigrecord sigline ; 
// struct *sigline_p = &sigline ; 
// !! You still have to assign sigline_p to the address of sigline in order to use the pointer



int main() {
	
	struct sigrecord this_record ; 

	this_record.signum = 100 ; 
	strcpy(this_record.signame, "SIGINT") ; 
	strcpy(this_record.sigdesc, "Interrupt from Keyboard") ; 


	printf("%s %s %d\n", this_record.signame, this_record.sigdesc, this_record.signum) ; 


	sigline.signum = 1000 ; 
	sigline_p = &sigline ; 

	sigline_p->signum = 12000 ;    


	printf("%d\n", sigline.signum) ; 


	return 0 ; 
}


// An object identified by sigline that has a type struct sigrecord and has a pointer to the sigline object identified by sigline_p 
