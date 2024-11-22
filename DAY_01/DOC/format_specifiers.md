# C Format Specifiers

In C, format specifiers are used in functions like `printf` to specify the type of data being printed. Here’s a list of common format specifiers used in C.

## 1. Integer Format Specifiers

| Specifier | Description                          | Example             |
|-----------|--------------------------------------|---------------------|
| `%d`      | Prints an integer (decimal)          | `printf("%d", 10);` |
| `%i`      | Same as `%d`, prints an integer      | `printf("%i", 10);` |
| `%o`      | Prints an integer in octal (base 8)  | `printf("%o", 10);` |
| `%x`      | Prints an integer in hexadecimal (lowercase) | `printf("%x", 10);` |
| `%X`      | Prints an integer in hexadecimal (uppercase) | `printf("%X", 10);` |
| `%u`      | Prints an unsigned integer           | `printf("%u", 10);` |

## 2. Floating-Point Format Specifiers

| Specifier | Description                          | Example                 |
|-----------|--------------------------------------|-------------------------|
| `%f`      | Prints a float or double (fixed-point notation) | `printf("%f", 3.14);`   |
| `%e`      | Prints a float or double in scientific notation (lowercase) | `printf("%e", 3.14);`   |
| `%E`      | Prints a float or double in scientific notation (uppercase) | `printf("%E", 3.14);`   |
| `%g`      | Prints a float or double in either normal or scientific notation, depending on the value and precision | `printf("%g", 3.14);`   |
| `%G`      | Same as `%g`, but in uppercase for scientific notation | `printf("%G", 3.14);`   |

## 3. Character and String Format Specifiers

| Specifier | Description                          | Example              |
|-----------|--------------------------------------|----------------------|
| `%c`      | Prints a single character            | `printf("%c", 'A');` |
| `%s`      | Prints a string (array of characters) | `printf("%s", "Hello");` |

## 4. Pointer Format Specifiers

| Specifier | Description                          | Example               |
|-----------|--------------------------------------|-----------------------|
| `%p`      | Prints a pointer address (memory location) | `printf("%p", ptr);`  |

## 5. Miscellaneous Format Specifiers

| Specifier | Description                          | Example                |
|-----------|--------------------------------------|------------------------|
| `%%`      | Prints a literal `%` character       | `printf("%%");`        |
| `%n`      | Writes the number of characters printed so far into an integer variable (used with `&`) | `int count; printf("%d %n", 10, &count);` |

---
