#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef float data_t;
#define I 64
#define J 64
#define K 64

#define VEC_LEN 4
#define NON_ZERO_NUM 3
#define COMPRESS_RATIO (VEC_LEN/NON_ZERO_NUM)
#define META_DATA_NUM 1
#define EFF_COMPRESS_RATIO (VEC_LEN/(NON_ZERO_NUM+META_DATA_NUM))

//#define VEC_LEN 4
//#define NON_ZERO_NUM 2
//#define COMPRESS_RATIO (VEC_LEN/NON_ZERO_NUM)
//#define META_DATA_NUM 2
//#define EFF_COMPRESS_RATIO (VEC_LEN/(NON_ZERO_NUM+META_DATA_NUM))

//#define VEC_LEN 4
//#define NON_ZERO_NUM 1
//#define COMPRESS_RATIO (VEC_LEN/NON_ZERO_NUM)
//#define META_DATA_NUM 1
//#define EFF_COMPRESS_RATIO (VEC_LEN/(NON_ZERO_NUM+META_DATA_NUM))

//#define VEC_LEN 8
//#define NON_ZERO_NUM 3
//#define COMPRESS_RATIO (VEC_LEN/NON_ZERO_NUM)
//#define META_DATA_NUM 1
//#define EFF_COMPRESS_RATIO (VEC_LEN/(NON_ZERO_NUM+META_DATA_NUM))

//#define VEC_LEN 8
//#define NON_ZERO_NUM 2
//#define COMPRESS_RATIO (VEC_LEN/NON_ZERO_NUM)
//#define META_DATA_NUM 2
//#define EFF_COMPRESS_RATIO (VEC_LEN/(NON_ZERO_NUM+META_DATA_NUM))