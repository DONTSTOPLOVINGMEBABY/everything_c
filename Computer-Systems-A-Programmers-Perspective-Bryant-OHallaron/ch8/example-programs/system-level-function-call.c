#include <unistd.h>

int main () {
    // 1 <-- stdout 
    // "Hello world\n" <-- Sequence of bytes to 'write' 
    // 13 <-- Number of bytes to write
    write(1, "Hello world\n", 13) ; 
    _exit(0) ; 
}