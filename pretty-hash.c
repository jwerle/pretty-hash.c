#include <string.h>
#include <stdio.h>
#include <errno.h>

#include "pretty-hash.h"

int
pretty_hash(char *out, unsigned char *bytes, unsigned long int size) {
  int written = 0;
  int j = 0;
  int k = 0;

  if (0 == out) {
    return -EFAULT;
  }

  if (0 == bytes) {
    return 0;
  }

  memset(out, 0, pretty_hash_BYTES);

  for (int i = 0; i < size; ++i) {
    if (written == pretty_hash_BYTES) {
      break;
    }

    if (
      size > pretty_hash_threshold_BYTES &&
      written >= pretty_hash_threshold_BYTES - 2
    ) {
      if (written == (pretty_hash_threshold_BYTES - 2)) {
        sprintf(out + written, "..");
        written += 2;
        break;
      }
    }

    sprintf(out + written, "%02x", bytes[i]);
    written += 2;
  }

  if (
    size > pretty_hash_threshold_BYTES &&
    written == pretty_hash_threshold_BYTES
  ) {
    sprintf(out + written, "%02x", bytes[size - 1]);
    written += 2;
  }

  return written;
}
