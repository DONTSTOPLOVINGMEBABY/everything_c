#include <stdio.h> 
#include <string.h> 

struct point {
    int x ; 
    int y ; 
} ; 

struct rect {
    struct point pt1 ; 
    struct point pt2 ; 
} ; 

// makepoint takes two integers and returns a point structure
struct point makepoint (int x, int y) {
    struct point temp ; 
    temp.x = x ; 
    temp.y = y ; 
    return temp ; 
} ; 

// Function to do arithmetic on points 
// Uses p1 as temporary struct, doesn't actually change any values inside of p1 or p2 
// Even though assignment is used. This is because structures are passed by value in C! 
struct point addpoint (struct point p1, struct point p2){
    p1.x += p2.x ; 
    p1.y += p2.y ; 
    return p1 ; 
} ; 



int main() {

    struct point pt ; 
    struct point maxpt = { 320, 200 } ; 
    
    struct rect screen ; // Rect structure contains two point structures: pt1 and pt2 ; 
    struct point middle ; 
    struct point makepoint(int, int) ; // Pretty sure this casts the answer below to be an int? 

    screen.pt1 = makepoint(400, 500) ; 
    screen.pt2 = makepoint(200, 300) ; 
    middle = makepoint( (screen.pt1.x + screen.pt2.x)/2 , (screen.pt1.y + screen.pt2.y)/2 ) ; 

    struct point make_your_point_already = addpoint(screen.pt1, screen.pt2)  ;

    struct point origin = {0, 0}, *pp ; 
    pp = &origin ; 
    printf("origin is (%d, %d)\n", (*pp).x, (*pp).y) ; 
    printf("again, origin is (%d, %d)\n", pp->x, pp->y) ; 

    struct rect r, *rp = &r ; 
    // This can be expressed in the following ways: 
    //      1. r.pt1.x
    //      2. rp->pt1.x 
    //      3. (r.pt1).x 
    //      4. (rp->pt1).x 

    

    return 0 ; 
}