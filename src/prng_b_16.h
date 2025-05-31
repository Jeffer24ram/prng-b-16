#ifndef PRNG_B_16_H
#define PRNG_B_16_H

#include <stdint.h>

struct prng_b_16_s {
  uint16_t a;
  uint16_t b;
};

uint16_t prng_b_16(struct prng_b_16_s *s);

#endif
