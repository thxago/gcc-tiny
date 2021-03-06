/* Test the `vreinterpretQp64_u64' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_crypto_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_crypto } */

#include "arm_neon.h"

void test_vreinterpretQp64_u64 (void)
{
  poly64x2_t out_poly64x2_t;
  uint64x2_t arg0_uint64x2_t;

  out_poly64x2_t = vreinterpretq_p64_u64 (arg0_uint64x2_t);
}

