/* Test the `vzipQf32' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vzipQf32 (void)
{
  float32x4x2_t out_float32x4x2_t;
  float32x4_t arg0_float32x4_t;
  float32x4_t arg1_float32x4_t;

  out_float32x4x2_t = vzipq_f32 (arg0_float32x4_t, arg1_float32x4_t);
}

/* { dg-final { scan-assembler "vzip\.32\[ 	\]+\[qQ\]\[0-9\]+, \[qQ\]\[0-9\]+!?\(\[ 	\]+@\[a-zA-Z0-9 \]+\)?\n" } } */
