#include <stdlib.h>
#include "chunk.h"

void initChunk(Chunk* c) {
    c->count = 0;
    c->capacity = 0;
    c->code = NULL;
}

