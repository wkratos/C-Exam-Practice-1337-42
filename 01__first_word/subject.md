# first_word

## Assignment

Write a program that takes a string and displays its first word, followed by a newline.

A word is a section of string delimited by spaces or tabs, or by the beginning or end of the string.

If the number of arguments is not 1, or if there are no words, simply display a newline.

## Expected file

```text
first_word.c
```

## Allowed functions

```text
write
```

## Examples

```console
$ ./first_word "FOR PONY" | cat -e
FOR$
$ ./first_word "this        ...       is Sparta, then again, maybe not" | cat -e
this$
$ ./first_word "" | cat -e
$
$ ./first_word "   lorem,ipsum   " | cat -e
lorem,ipsum$
```
