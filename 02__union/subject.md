# union

## Assignment

Write a program that takes two strings and displays, without duplicates, the characters that appear in either string.

Display characters in the order in which they appear on the command line, followed by a newline. If the number of arguments is not 2, display only a newline.

## Expected file

```text
union.c
```

## Allowed functions

```text
write
```

## Examples

```console
$ ./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$ ./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$ ./union | cat -e
$
$ ./union "rien" | cat -e
$
```
