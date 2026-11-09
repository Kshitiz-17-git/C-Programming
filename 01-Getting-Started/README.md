# Getting Started with C

C source code is saved in `.c` files. A compiler such as GCC translates that code into a program your computer can run. A basic C program includes the standard input/output library, starts running in `main()`, and returns `0` when it finishes successfully.

In this folder, the examples introduce printing messages and displaying values with `printf()`. The practice programs apply those basics by printing personal details and a simple pattern.

## Examples

- [`hello_world.c`](Examples/hello_world.c) — print a first message.
- [`formatted_output.c`](Examples/formatted_output.c) — display labeled values with format specifiers.

## Practice

- [`print_personal_details.c`](Practice/print_personal_details.c) — print your name, course, and hobbies on separate lines.
- [`print_simple_pattern.c`](Practice/print_simple_pattern.c) — print a small pattern with asterisks.

## Compile and run

From the repository's main folder:

```bash
gcc 01-Getting-Started/Examples/hello_world.c -o hello_world
./hello_world
```
