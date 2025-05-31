#include "prng_b_16.h"

uint16_t prng_b_16(struct prng_b_16_s *s) {
  s->a = ((s->a << 5) | (s->a >> 11)) ^ s->b;
  s->b += 1111;
  return s->a + s->b;
}
