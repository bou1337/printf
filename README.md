# ft_printf

ft_printf is a custom implementation of the standard C `printf` function, developed as part of the 42 curriculum. It replicates the functionality of `printf` while handling various format specifiers and conversions.

## Features
- Supports format specifiers:
  - `%c` - Character
  - `%s` - String
  - `%d` / `%i` - Integer
  - `%u` - Unsigned integer
  - `%x` / `%X` - Hexadecimal (lowercase/uppercase)
  - `%p` - Pointer address
  - `%%` - Percent sign
- Handles width, precision, and flags
- Works without using the standard `printf` library functions

## Installation
### Clone the repository
```sh
git clone https://github.com/bou133/ft_printf.git
cd ft_printf
```

### Build the library
```sh
make
```
This will generate a `libftprintf.a` file, which can be linked to your projects.

## Usage
Include `ft_printf.h` in your source file:
```c
#include "ft_printf.h"
```
Compile your program with `libftprintf.a`:
```sh
gcc myprogram.c -L. -lftprintf -o myprogram
```

Example usage:
```c
ft_printf("Hello, %s! Your score is %d.\n", "Alice", 42);
```

## Resources
- [42's ft_printf Subject](https://cdn.intra.42.fr/pdf/pdf/28534/en.subject.pdf) - Official project specifications.
- [ft_printf Repository](https://github.com/bou1337/ft_printf) - Repository with implementation and documentation.

