# wdmatch

## Assignment

Write a program that takes two strings and checks whether it is possible to write the first string using characters from the second string while respecting the order in which those characters appear in the second string.

If possible, display the first string followed by a newline; otherwise display only a newline. If the number of arguments is not 2, display only a newline.

## Expected file

```text
wdmatch.c
```

## Allowed functions

```text
write
```

## Examples

```console
$ ./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$ ./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$ ./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdckuoixq " | cat -e
quarante deux$
$ ./wdmatch | cat -e
$
```
