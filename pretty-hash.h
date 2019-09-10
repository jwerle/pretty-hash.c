#ifndef PRETTY_HASH_H
#define PRETTY_HASH_H

#define pretty_hash_threshold_BYTES 8
#define pretty_hash_BYTES 10

int
pretty_hash(char *out, unsigned char *bytes, unsigned long int size);

#endif
