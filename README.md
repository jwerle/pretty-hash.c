pretty-hash.c
=============

> A C implementation of pfrazee's pretty-hash

## Installation

```sh
$ clib install jwerle/pretty-hash.c --save
```

## Usage

```c
#include <pretty-hash/pretty-hash.h>

int
main(void) {
  unsigned char bytes[] = {
    0x00, 0x11, 0x22, 0x33,
    0x44, 0x55, 0x66, 0x77,
    0x88, 0x99, 0xaa, 0xbb,
    0xcc, 0xdd, 0xee, 0xee
  };

  char hash[pretty_hash_BYTES] = { 0 };
  int size = pretty_hash(hash, bytes, sizeof(bytes));
  printf("%s\n", hash);
  return 0;
}
```

## Usage as a clib Module

As a [clib module](https://github.com/clibs/module):

```c
#include <pretty-hash/module.h>

int
main(void) {
  module(pretty_hash) *mod = require(pretty_hash);
  unsigned char bytes[] = {
    0x00, 0x11, 0x22, 0x33,
    0x44, 0x55, 0x66, 0x77,
    0x88, 0x99, 0xaa, 0xbb,
    0xcc, 0xdd, 0xee, 0xee
  };

  char hash[pretty_hash_BYTES] = { 0 };
  int size = mod->pretty_hash(hash, bytes, sizeof(bytes));
  printf("%s\n", hash);
  return 0;
}
```

## See Also

- [pfrazee/pretty-hash](https://github.com/pfrazee/pretty-hash)

## License

MIT
