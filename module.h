#ifndef PRETTY_HASH_MODULE_H
#define PRETTY_HASH_MODULE_H

#include <clibs/module/require.h>
#include <clibs/module/module.h>
#include <clibs/module/def.h>

#include "pretty-hash.h"

/**
 * `pretty_hash` module definition.
 */
module(pretty_hash) {
  define(pretty_hash, CLIB_MODULE);

  /**
   * Computes pretty hash.
   *
   * ```
   *  pretty->hash(out, bytes, size);
   * ```
   */
  int (*hash)(char *, unsigned char *, unsigned long int);
};

/**
 * `pretty_hash` module exports.
 */
exports(pretty_hash) {
  defaults(pretty_hash, CLIB_MODULE_DEFAULT),
  .hash = pretty_hash
};

#endif
