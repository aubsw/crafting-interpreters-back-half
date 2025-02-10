#include "common.h"
#include "chunk.h"

int main(int argc, const char* argv[]) {
    Chunk c;
    initChunk(&c);
    printf("%d the capacity\n", c.capacity);
    return 0;
}
 
