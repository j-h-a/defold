#ifndef DMSDK_HASH_H
#define DMSDK_HASH_H

#include <stdint.h>
#include "shared_library.h"

/*# SDK Hash API documentation
 * [file:<dmsdk/dlib/hash.h>]
 *
 * Hash functions.
 *
 * @document
 * @name Hash
 * @namespace dmHash
 */

/*# dmhash_t type definition
 *
 * ```cpp
 * typedef uint64_t dmhash_t
 * ```
 *
 * @typedef
 * @name dmhash_t
 *
 */
typedef uint64_t dmhash_t;

extern "C"
{


/*# calculate 64-bit hash value from buffer
 *
 * @name dmHashBuffer64
 * @param buffer [type:const void*] Buffer
 * @param buffer_len [type:uint32_t] Length of buffer
 * @return hash [type:uint64_t] hash value
 */
DM_DLLEXPORT uint64_t dmHashBuffer64(const void* buffer, uint32_t buffer_len);


/*# calculate 64-bit hash value from string
 *
 * @name dmHashString64
 * @param string [type:const char*] Null terminated string
 * @return hash [type:uint64_t] hash value
 */
DM_DLLEXPORT uint64_t dmHashString64(const char* string);

}

#endif // DMSDK_HASH_H
