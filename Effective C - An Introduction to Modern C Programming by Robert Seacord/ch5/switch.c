#include <stdio.h>


int main()
{
	
	puts("How many hours did you work today?");
	int hours ; 
	scanf("%d", &hours) ; 


	switch(hours){
	
		case 8:
			puts("Freaking nice job buddy") ; 
			break ; 
		case 7:
			puts("Not bad, keep up the hard work") ; 
			break ; 
		case 6: 
			puts("Not good. I lied about 7 btw") ; 
			break ; 
		case 5:
			puts("Terrible, you should known better. You should also be seeing the next one");
		case 4:
			puts("Can you see me?") ; 
			break ; 
		case 3:
			puts("You shouldn't be able to see me") ; 
			break ;	
		case -69:
			puts("The naughty easteregg!") ; 
			break ;

		case 100:
			puts("The switch statement doesn't need to be in order!") ; 
			break ; 


		default:
			puts("You haven't entered any of the numbers on the switch panel!") ; 
			break ; 



	}




	return 0 ; 

}

