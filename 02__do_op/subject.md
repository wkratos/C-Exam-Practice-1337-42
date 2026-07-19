# do_op

## Assignment

Write a program that takes three arguments: an integer, an operator among `+`, `-`, `*`, `/`, and `%`, and another integer. Perform the specified arithmetic operation and display the result followed by a newline.

If the number of arguments is not 3, display only a newline. If the operator is invalid, do nothing.

## Expected file

```text
do_op.c
```

## Allowed functions

```text
write, atoi, printf
```

## Examples

```console
$ ./do_op 1 + 1
2
$ ./do_op 3 "*" 7
21
$ ./do_op 10 '%' 2
0
$ ./do_op | cat -e
$
```
