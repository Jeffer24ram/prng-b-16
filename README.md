# PRNG-B-16: A Fast, Statistically-Strong PRNG 🎲

![PRNG-B-16](https://img.shields.io/badge/PRNG-B--16-blue.svg)

Welcome to the PRNG-B-16 repository! This project features a fast and statistically-strong pseudo-random number generator (PRNG) that generates 16-bit integers. With a period of \(2^{16}\), it ensures a robust sequence of numbers suitable for various applications, including simulations, cryptography, and gaming.

## Table of Contents

1. [Overview](#overview)
2. [Features](#features)
3. [Installation](#installation)
4. [Usage](#usage)
5. [Examples](#examples)
6. [Performance](#performance)
7. [Contributing](#contributing)
8. [License](#license)
9. [Releases](#releases)

## Overview

PRNG-B-16 provides a reliable method for generating random numbers. It is designed to be fast, making it suitable for real-time applications. The generator produces 16-bit integers, allowing for a wide range of values. Its period of \(2^{16}\) ensures that it cycles through values without repeating too quickly, which is crucial for many applications.

## Features

- **Speed**: The algorithm is optimized for performance, making it one of the fastest in its class.
- **Statistical Strength**: It meets statistical tests for randomness, ensuring that the generated numbers are suitable for simulations and cryptographic applications.
- **Simple API**: Easy-to-use functions allow for quick integration into projects.
- **Open Source**: This project is open for contributions and improvements.

## Installation

To install PRNG-B-16, clone the repository and build the project:

```bash
git clone https://github.com/Jeffer24ram/prng-b-16.git
cd prng-b-16
make
```

Ensure you have the necessary development tools installed. For more detailed installation instructions, refer to the documentation in the `docs` folder.

## Usage

After installation, you can use the PRNG in your project. Here’s a simple example of how to generate random numbers:

```c
#include "prng.h"

int main() {
    PRNG prng;
    prng_init(&prng, seed_value);

    for (int i = 0; i < 10; i++) {
        uint16_t random_number = prng_generate(&prng);
        printf("%u\n", random_number);
    }

    return 0;
}
```

Make sure to replace `seed_value` with your desired seed.

## Examples

Here are a few examples of how you can use PRNG-B-16 in different scenarios:

### Simulation

When running simulations, random numbers can represent various events. For instance, in a Monte Carlo simulation, you can generate random samples to estimate results.

### Gaming

In game development, random numbers can control events such as enemy spawning, loot drops, and other random mechanics.

### Cryptography

Although PRNG-B-16 is not a cryptographic PRNG, it can still serve as a component in systems that require random number generation. Always ensure you understand the security implications of using a PRNG in sensitive applications.

## Performance

PRNG-B-16 is designed for speed. Benchmarks show that it can generate random numbers significantly faster than many other PRNGs. The performance will depend on your hardware and the specific implementation.

To measure performance, you can run the provided benchmark script:

```bash
./benchmark
```

This will give you a report on the speed of number generation in your environment.

## Contributing

We welcome contributions to PRNG-B-16! If you have ideas for improvements or new features, please fork the repository and submit a pull request. Before contributing, please read our [CONTRIBUTING.md](CONTRIBUTING.md) for guidelines.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Releases

For the latest releases, visit our [Releases page](https://github.com/Jeffer24ram/prng-b-16/releases). You can download the latest version and execute it to get started quickly.

Additionally, you can check the "Releases" section of the repository for previous versions and updates.

## Conclusion

PRNG-B-16 offers a fast and reliable solution for generating pseudo-random numbers. Whether you are developing games, running simulations, or working on cryptographic applications, this PRNG can meet your needs. 

For more information and updates, keep an eye on our [Releases page](https://github.com/Jeffer24ram/prng-b-16/releases).

Happy coding! 🎉