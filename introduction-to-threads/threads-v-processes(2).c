#include <stdlib.h>
#include <stdio.h>
#include <unistd.h> 
#include <pthread.h> 

int x = 2 ; 

void * routine () {
    x++ ; 
    sleep(2) ; 
    printf("Value of x:%d\n", x) ; 
    return 0 ; 
}

void * routine2 () {
    sleep(2) ; 
    printf("Value of x : %d\n", x) ; 
    return 0 ; 
}

int main( int argc, char * argv[] ) {
    pthread_t t1 , t2; 
    if (pthread_create(&t1, NULL, routine, NULL) != 0){
        return 1 ; 
    }
    if (pthread_create(&t2, NULL, routine2, NULL) != 0){
        return 2 ; 
    }
    if (pthread_join(t1, NULL)){
        return 3 ; 
    }
    if (pthread_join(t2, NULL)){
        return 4 ; 
    }
    return 0 ; 
}

/* 
Differences between processes and threads 
------------------------------------------


1. Processes can contain multiple threads, but a thread can't contain multiple processes

2. The address space 
    - Processes each get their own copy of an address space 
    - All threads access a common set of variables (same address space)

*/