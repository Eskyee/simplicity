#ifndef SIMPLICITY_TAG_H
#define SIMPLICITY_TAG_H

#include <string.h>
#include "sha256.h"
#include "ascii.h"

/* Create a SHA-256 tagged hash in the style of BIP-0340.
 *
 * This function can be used in two ways.
 * The first way is to use this function to initialize a new 'sha256_context' by providing the output buffer and the tag.
 * The second way is to ignore the return value of this function and use it to set the output buffer to the midstate generated by the tag.
 *
 * The 'tagName' is not expected to be 'NULL' terminated.
 *
 * Prefer to call this function through the 'MK_TAG' macro.
 *
 * Precondition: uint32_t ouput[8]
 *               unsigned char tagName[len];
 */
static inline sha256_context mkTag(uint32_t* output, const unsigned char* tagName, const size_t len) {
  sha256_context result = sha256_init(output);
  sha256_midstate buffer;
  {
    sha256_context ctx = sha256_init(buffer.s);
    sha256_uchars(&ctx, tagName, len);
    sha256_finalize(&ctx);
  }

  sha256_hash(&result, &buffer);
  sha256_hash(&result, &buffer);
  return result;
}

/* The length of a string literal is one less than its sizeof due to the terminating 'NULL' character. */
#define LENGTH_OF(s) (sizeof("" s) - 1)

/* MK_TAG(output, s) takes a string literal, 's', and fills in the 'tagName' and 'len' arguments of 'mkTag' appropriately. */
#define MK_TAG(output, s) (mkTag((output), (unsigned char []){"" s}, LENGTH_OF(s)))

#endif
