#ifndef PRETTY_HASH_MODULE_H
#define PRETTY_HASH_MODULE_H

#include <clibs/module/require.h>
#include <clibs/module/module.h>
#include <clibs/module/def.h>

#include "pretty-hash.h"

clib_module(pretty_hash) {
  clib_module_define(pretty_hash, CLIB_MODULE);

  int (*pretty_hash)(char *, unsigned char *, unsigned long int);
};

clib_module_exports(pretty_hash) {
  clib_module_defaults(pretty_hash, CLIB_MODULE_DEFAULT),
  .pretty_hash = pretty_hash
};

#endif
