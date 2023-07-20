#include <stdlib.h>
#include <stdio.h>
#include <unistd.h> 
#include <pthread.h> 

pthread_mutex_t mutex ; 
int counter = 0 ;
void * run_me () {
    for (int i = 0 ; i < 100000 ; i++){
        pthread_mutex_lock(&mutex) ; 
        counter++ ; 
        pthread_mutex_unlock(&mutex) ; 
    }
    return NULL ; 
}

int main() {
    pthread_t th[4] ; 
    pthread_mutex_init(&mutex, NULL) ; 
    for (int i = 0 ; i < 4 ; i++){
        if (pthread_create(th + i, NULL, &run_me, NULL) != 0){
            perror("Failed to create thread") ; 
            return 1 ; 
        }
        printf("Thread %d has started\n", i) ; 
    }

    for (int i = 0 ; i < 4 ; i++){
        if (pthread_join(th[i], NULL) != 0){
            return 2 ; 
        }
        printf("%d\n", counter) ; 
        printf("Thread %d has finished\n", i) ; 
    }
    
    return 0 ; 
}