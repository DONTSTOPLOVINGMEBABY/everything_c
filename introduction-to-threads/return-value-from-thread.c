#include <stdlib.h>
#include <stdio.h>
#include <unistd.h> 
#include <pthread.h> 
#include <time.h>

void * roll_dice () { 
    int value = (rand() % 6) +  1 ; 
    printf("Value == %d\n", value) ; 
    return NULL ; 
}

int main() {
    srand(time(NULL)) ; 
    pthread_t thread ; 
    if (pthread_create(&thread, NULL, &roll_dice, NULL) != 0) {
        return 1 ; 
    }
    if (pthread_join(thread, NULL) != 0){
        return 2 ; 
    }

    return 0 ; 
}