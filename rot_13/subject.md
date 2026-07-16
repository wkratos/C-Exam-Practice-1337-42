# rot_13

## Assignment

Write a program that takes a string and displays it, replacing each of its letters by the letter 13 places ahead in alphabetical order.

`z` becomes `m` and `Z` becomes `M`. Case remains unchanged.

The output is followed by a newline. If the number of arguments is not 1, the program displays a newline.

## Expected file

```text
rot_13.c
```

## Allowed functions

```text
write
```

## Examples

```console
$ ./rot_13 "abc"
nop
$ ./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
$ ./rot_13 | cat -e
$
```
