# rostring

## Assignment

Write a program that takes a string and displays it after rotating it one word to the left. The first word becomes the last, while the other words stay in the same order.

A word is a part of a string delimited by spaces or tabs, or by the beginning or end of the string. Words are separated by exactly one space in the output.

If there is less than one argument, display only a newline.

## Expected file

```text
rostring.c
```

## Allowed functions

```text
write, malloc, free
```

## Examples

```console
$ ./rostring "abc   " | cat -e
abc$
$ ./rostring "Que la     lumiere soit et la lumiere fut"
la lumiere soit et la lumiere fut Que
$ ./rostring | cat -e
$
```
