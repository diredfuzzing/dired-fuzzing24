#ifndef AFL_NGRAM_CONFIG_H
#define AFL_NGRAM_CONFIG_H

#include "types.h"

#if (MAP_SIZE_POW2 <= 16)
typedef u16 PREV_LOC_T;
#elif (MAP_SIZE_POW2 <= 32)
typedef u32 PREV_LOC_T;
#else
typedef u64 PREV_LOC_T;
#endif

/* Maximum ngram size */
#define NGRAM_SIZE_MAX 16U

/* Maximum K for top-K context sensitivity */
#define CTX_MAX_K 32U

#endif
