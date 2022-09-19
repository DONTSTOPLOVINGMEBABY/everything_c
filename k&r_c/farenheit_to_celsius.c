#include <stdio.h> 




int main()
{

	int upper_limit = 300 ;
	 
	int temp = 0, celsius = 0 ; 

	while (temp <= upper_limit) {
		celsius = ((temp - 32) * 5) / 9   ;
		printf("%d Fahrenehit : %d Celsius\n", temp, celsius) ; 
		temp += 20 ; 
	}




	return 0 ; 


}
