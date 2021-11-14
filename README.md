# get_next_line()

{EPITECH.} first year project.

C function that reads from a [filedescriptor](https://en.wikipedia.org/wiki/File_descriptor) line per line, each time the function is called.

## Prototype

```cpp
char *get_next_line(int const fd);
```

## How to use get_next_line()?

### Editing the header file

 - `get_next_line()` retrieves lines using the `read(2)` [syscall](https://en.wikipedia.org/wiki/System_call).

 - The `READ_SIZE` macro located inside the `get_next_line.h` header file represents the number of bytes that are read each time `read(2)` is called.

 - You can edit this macro to optimized the number of calls to `read(2)`.

```cpp
#  define READ_SIZE (32)
```

*If you don't know what to do, simply keep the default value.*

### Including the header

Include `get_next_line()`'s header file inside your C source file:

```cpp
#include "get_next_line.h"
```

### Calling the function

 - When calling `get_next_line()`, feed it a [filedescriptor](https://en.wikipedia.org/wiki/File_descriptor) as a type `int` argument.
 - Each time you call `get_next_line()`, the function allocates & returns a `char *`.
 - The first time you call `get_next_line()`, the `char *` returned contains the first line found when reading from the filedescriptor you fed to the function.
 - After the first call, each call to `get_next_line()` with the same filedescriptor will return the *next line* found.
 - When there is no more line to read, `get_next_line()` returns `NULL`.
 - If a fatal error occurs (`malloc(3)` or `read(2)` failure), `get_next_line()` also returns `NULL`.

Here is an example that reads and prints all the lines from [stdin](https://en.wikipedia.org/wiki/Standard_streams#Standard_input_(stdin)):

```cpp
char *line;
while ((line = get_next_line(0)) != NULL)
      printf("Next line -> %s", line);
```

