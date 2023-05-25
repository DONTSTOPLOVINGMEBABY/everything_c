#include <stdlib.h> 
#include <stdio.h> 
#include <unistd.h> 
#include <pthread.h> 

void *routine () {
    printf("Test from threads\n") ; 
    sleep(3) ; 
    printf("Ending thread\n") ; 
    return NULL ; 
}



int main( int argc, char * argv[] ) {
    pthread_t t1 , t2 ; 
    if (pthread_create( &t1, NULL, routine, NULL) != 0) {
        return 1 ; 
    }  
    if (pthread_create( &t2, NULL, routine, NULL) != 0){
        return 1 ; 
    } 
    pthread_join( t1, NULL ) ; // basically a wait but for threads
    // You could pass in a variable that would get the result from that thread but 
    // since the function is not returning anything, we just pass NULL
    pthread_join( t2, NULL ) ; 
    return 0 ;
}


// gcc -g -pthread main.c -o main