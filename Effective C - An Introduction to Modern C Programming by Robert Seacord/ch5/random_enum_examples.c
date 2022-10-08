#include <stdio.h> 


enum year{Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec} ; 
typedef enum { Savings, Checking, MoneyMarket } AccountType ; 


void assignInterestRates(AccountType account) {
	double interest_rate ; 
	switch(account) {
		case Savings:
			interest_rate = 3.0 ;
			break ; 
		case Checking:
			interest_rate = 1.0 ; 
			break ; 
		case MoneyMarket:
			interest_rate = 4.5 ; 
			break ; 
		}

	printf("Interest Rate = %g. \n", interest_rate) ; 
}




int main()
{
	int i ;
	for (i = Jan ; i <= Dec; i++)
		printf("%d ", i) ;

	puts(""); 


	AccountType account1 = 0 ;
       	AccountType account2 = 1 ; 
	AccountType account3 = 2 ; 	

	assignInterestRates( account1 ) ; 	
	assignInterestRates( account2 ) ; 	
	assignInterestRates( account3 ) ; 	


	return 0 ; 

} 
