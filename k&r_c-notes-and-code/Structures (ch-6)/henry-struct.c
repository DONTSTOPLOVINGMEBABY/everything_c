#include <stdio.h> 
#include <string.h>

struct person {
    char first_name[25] ; 
    char last_name[25] ; 
    char favorite_food[100] ; 
    unsigned int age ; 

} ; 

int main () {
    puts("Hello, World!") ; 

    struct person henry = { "Henry", "Jacobs", "Doughnut", 23 } ; 

    printf("Hi my name is %s %s. I am %d years old. My favorite food is %s.\n", 
    henry.first_name, henry.last_name, henry.age, henry.favorite_food) ; 



    return 0 ; 
}