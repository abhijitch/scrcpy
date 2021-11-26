#ifndef SC_ARRAYMAP_H
#define SC_ARRAYMAP_H

#include "common.h"

struct sc_intmap_entry {
    int key;
    int value;
};

const struct sc_intmap_entry *
sc_intmap_find_entry(const struct sc_intmap_entry entries[], size_t len,
                     int key);

/**
 * MAP is expected to be a static array of sc_intmap_entry, so that
 * ARRAY_LEN(MAP) can be computed statically.
 */
#define SC_INTMAP_FIND_ENTRY(MAP, KEY) \
    sc_intmap_find_entry(MAP, ARRAY_LEN(MAP), KEY)

#endif
