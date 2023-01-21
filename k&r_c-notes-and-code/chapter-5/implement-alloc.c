#include <stdio.h> 
#include <string.h> 

#define ALLOCSIZE 10000 

static char allocbuf[ALLOCSIZE] ;   /* Storage for alloc */
static char *allocp = allocbuf  ;   /* a character pointer pointing to beginning allocp */

char *alloc(int n) /* return pointer to n characters */ {
    /*if it fits, continue*/
    if (allocbuf + ALLOCSIZE - allocp >= n) {
        allocp += n  ; 
        return allocp - n ; 
    }
    else {
        return 0 ; 
    }
}

void afree(char *p) /* free storage pointed to by p */
{
    if (p >= allocbuf && p < allocbuf + ALLOCSIZE){
        allocp = p ; 
    }
}

int main(){
    char *pointer = alloc(100) ; 

    for (int i = 0 ; i < 100 ; i++){
        *pointer = "L" ; 
        *pointer++ ; 
    }

    for (int i = 0 ; i < 100 / sizeof(char) ; i++) {
        printf("%c", allocbuf[i]) ; 
        puts("") ; 
    }



    return 0 ; 
}