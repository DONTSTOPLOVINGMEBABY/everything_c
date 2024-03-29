#include <stdlib.h>
#include <stdio.h>
#include <unistd.h> 
#include <pthread.h> 

int number = 0 ;
pthread_mutex_t mutex ; 


void * routine () {
    for ( int i = 0 ; i < 100000 ; i++) {
        pthread_mutex_lock(&mutex) ; 
        number++ ; 
        pthread_mutex_unlock(&mutex) ; 
    }
    return NULL ; 
}

int main( int argc, char * argv[] ) {
    pthread_t t1 , t2; 
    pthread_mutex_init(&mutex, NULL) ; 
    if (pthread_create(&t1, NULL, routine, NULL) != 0){
        return 1 ; 
    }
    if (pthread_create(&t2, NULL, routine, NULL) != 0){
        return 2 ; 
    }
    if (pthread_join(t1, NULL)){
        return 3 ; 
    }
    if (pthread_join(t2, NULL)){
        return 4 ; 
    }
    pthread_mutex_destroy(&mutex) ; 
    printf("%d\n", number) ; 
    return 0 ; 
}
