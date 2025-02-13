#include <stdlib.h>
#include "chunk.h"
#include "memory.h"

void initChunk(Chunk* c) {
    c->count = 0;
    c->capacity = 0;
    c->code = NULL;
}

void writeChunk(Chunk* ch, uint8_t byte) {
    if (ch->capacity < ch->count + 1) {
        int oldCapacity = ch->capacity;
        ch->capacity = GROW_CAPACITY(oldCapacity);
        ch->code = GROW_ARRAY(uint8_t, ch->code, oldCapacity, ch->capacity);
    }
    ch->code[ch->count] = byte;
    ch->count++;

}

