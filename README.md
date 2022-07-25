![Logo](
https://cdn.iconscout.com/icon/free/png-128/c-57-1175191.png
) 
# Descriptions

This project seeks to develop a function similar to printf, in which arguments are received to format them and be printed on the screen.
# Structure
![App Screenshot](https://raw.githubusercontent.com/ManuRodriguezC/holbertonschool-printf/e6726a189ca61999deec5ee4bc6ee678525b2e2c/flowchart_printf.jpg)

# Compilation

Your code will be compiled this way:

$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c.

# instalation

All your files will be compiled on Ubuntu 20.04 LTS using gcc.

# Requirements

All your files will be compiled on Ubuntu 20.04 LTS using gcc using the options -Wall -Werror -Wextra -pedantic -std=gnu89.

# File Descriptions

-main.h: Librarys, Protptypes and Structure.

-_printf: Code od _printf

-get_op_functions.c: Camparate functions with character.

-functions.c: Functions case.

-man_3_printf: Manual _printf

# Examples 

### Integer

Intput: _printf("Unsigned octal:[%i]\n", ui);

Output: Unsigned octal:[20000001777]

### Decimal

Intput: _printf("Negative:[%d]\n", -984578);

Output: Negative:[-984578]

### Character

Intput: _printf("Character is :[%c]\n", 'W');

Output: Character is :[W]

### String

Intput: _printf("String:[%s]\n", "Holberton School !");

Output: String:[Holberton School !]

```
_printf("This is a project made by %i students, %s and %s.\n", 2, Marlon Amado, Esteban Rodriguez);

This is a project made by 2 students, Marlon Amado and Esteban Rodriguez.
```

# Testing

## Task

### Mandatory

Write a function that produces output according to a format c, s and %.

Handle the following conversion specifiers with i and d.

Create a man page for your function called man_3_printf.

### Advanced

Handle conversion specifier b: unsigned int argument is converted to binary.

Handle conversion specifiers u, o, x, X.

Use a local buffer of 1024 chars in order to call write as little as possible.

Handle conversion specifier p.

Handle conversion specifier S: prints the string.

Handle the following markup characters for non-custom conversion specifiers: +, space, and #.

Handle the following length modifiers for non-custom conversion specifiers: l and h, Conversion specifiers to handle: d, i, u, o, x, X.

Handle the field width for non-custom conversion specifiers.

Handle the precision for non-custom conversion specifiers.

Handle the 0 flag character for non-custom conversion specifiers.

Handle the - flag character for non-custom conversion specifiers.

Handle the custom conversion specifier r that prints the reversed string.

Handle the custom conversion specifier R that prints the rot13'ed string.

All above options should work well together.

# AUTHORS

   	Manuel Esteban Rodriguez Castro - Marlon Jose Aguillon Amado
