# ZeroCodes

A small C++ console program that solves quadratic equations (ax² + bx + c = 0).
You enter a, b and c, and it prints the real roots. If a = 0 it asks again, since then
it's a linear equation.

Written as practice while learning C++23 (`std::print`).

## Build

```sh
g++ -std=c++23 -Wall -Wextra Finding_Quadratic_Roots.cpp -o roots
./roots
```
