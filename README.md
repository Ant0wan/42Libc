# Libft [![42](https://i.imgur.com/9NXfcit.jpg)](i.imgur.com/9NXfcit.jpg)

[![Build Status](https://travis-ci.com/Ant0wan/42Libc.svg?branch=master)](https://travis-ci.com/Ant0wan/42Libc)

An implementation of some of the standard functions in C [a 42 side-project].

This project aims to learn basics of C and open-source project contribution methods.

---

## Makefile

The library contains a makefile, with the following options:

| Command | Usage |
| --- | --- |
| `make` | creates .o files for each function as well as the main library file, libft.a |
| `make libft.a` | same as make |
| `make clean` | removes the .o files used to create the library |
| `make fclean` | removes the .o files used to create the library, as well as the libft.a library file |
| `make re` | removes all compilation files and remakes them |

---

## Using this Library

- Copy of the repository:

```shell=
git clone https://github.com/Ant0wan/42Libc.git && cd 42Libc
```

- Compiling 42Libc:

```shell=
make && make clean
```

- After libft.a file has been created, it can be included in many of C project adding the following header in .c or .h files.

```shell=
include "libft.h"
```

- When compiling entire project, specify the path to libft.a in gcc command line

```shell=
gcc some_c_file.c -L<path_to_library_file> -lft
```

Note that -L takes the path to your library and -l takes the set of characters that come after lib in your library name.

