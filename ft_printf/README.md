
*This projet has been created as part of the 42 curriculum by sihasima.*

# Description

The ft_printf project at school 42 involves rewriting the standard printf function from the C library, creating a static library (libftprintf.a). The main objective is to understand how variadic functions work, to handle specific conversion formats (csdiupxX%), and to manipulate pointers and standard output, often using write and malloc.

# Instructions
In this project, Makefile has used to automate a build process.

Run the command: `make` to create the file `libftprintf.a`.
Include the header in your C file: `#include "ft_printf.h"`.
Compile your `main` function with the library: `cc -Wall -Wextra -Werror main.c libftprintf.a`.

Avalable make command:
`make all`: Compiles the project.
`make clean` : to remove object files (`.o`).
`make fclean`: to remove object files (`.o`) and the library (`libftprintf.a`).
`make re`: remove all object files (`.o`) and forces a full re-compilation.

# Ressources

**42 Norm:** All code follows the standard 42.

# Details description of the library
All function that i need to finish this project.
`ft_printf.c`: This function is designed to be a faithful replica of the `printf` function. It returns the total number of characters printed to standard output. The null byte (\0) is not included. In case of failure: If an error occurs during writing, the function should return a negative value (usually -1).
`ft_putchar.c` : It replicates the behavior of the `%c` format. It displays a single character on standard output.
`ft_putnbr.c` : It replicates the behavior of the `%d` and `%i` format. It display a signed integer in base 10 on standard output.
`ft_putstr.c` : It replicates the behavior of the `%s` format. It displays a string of characters. Handles the NULL case by displaying (null).
`ft_putptr.c`: It replicates the behavior of the `%p` format. It display memory address of a pointer in lowercase hexadecimal, preceded by 0x.
`ft_putunbr.c`: It replicates the behavior of the `%u` format. It converts and displays an unsigned integer (positive only) in base 10.
`ft_strlen.c`: count the length of the character string.
`ft_putnbr_base.c`: It replicates the behavior of the `%x` and `%X` format. It convert an integer pass in the parameter in hexadecimal(`%x`in lowercase hexadecimal and `%X` in uppercase hexadecimal).
Note: `%%`: displays a literal 'percent' symbol.

## Additional:
The algorithm that i has chosen and the data structure.
The algorithm chosen for `ft_printf` is a linear traversal of the character string.
The format string is traversed one character at a time. If a standard character is encountered, it is printed. Furthermore, if a percent sign (%) is encountered, a branching logic (dispatching) is activated. Dispatching is the logic that bridges the gap between the symbol (e.g., `%d`) and the corresponding function to call (e.g., `ft_putnbr`). Therefore, if a symbol is encountered, the corresponding function is called, which displays the function's return value, and then the format string is traversed.

For certain functions like ft_putnbr or ft_putnbr_base, i used recursion. For example, to display a number greater than 10, we divide by 10 recursively until we reach a dividend equal to 0, then we display the remainders (modulo) by going back up the call stack.

In the data structure, the specific C structure, va_list (Variadic Arguments), is the data structure imposed to handle an unknown number of arguments. It allows secure access to the call stack memory.
