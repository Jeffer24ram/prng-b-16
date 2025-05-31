# PRNG B 16

It's a fast, statistically-strong PRNG with 16-bit integers and a period of 2¹⁶.

`prng_b_16()` is the randomization function that generates a 16-bit, pseudorandom, unsigned integer.

It accepts the following argument.

1. `s` is the pointer that contains the state. Each state integer must be initialized with any combination of values.

It returns a 16-bit unsigned integer pseudorandom number result.

It's in the same class as Xorshift16 "798" with 1 auxiliary 16-bit state integer.

It has a minimum period of 2¹⁶ without broken cycles.

Incrementing `b` outside of `prng_b_16()` behaves as an interdimensional jump function that starts a different cycle with a period of at least 2¹⁶.

Zeroland escapes immediately after generating 1 subsequent number.

It's the fastest 16-bit PRNG that generates numbers individually, has a period of at least 2¹⁶ and passes statistical tests in `stdin16` PractRand with 128KB of numbers.

I welcome submissions of algorithms in the same class that challenge the aforementioned claim.

As an obligatory disclaimer, it's not a CSPRNG for use in cryptography.
