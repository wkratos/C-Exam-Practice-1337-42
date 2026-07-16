# repeat_alpha

## Assignment

Write a program called `repeat_alpha` that takes a string and displays each alphabetic character as many times as its alphabetical position, followed by a newline.

`a` and `A` print once, `b` and `B` print twice, and so on through `z` and `Z`. Preserve case. Non-alphabetic characters print once.

If the number of arguments is not 1, display only a newline.

## Expected file

```text
repeat_alpha.c
```

## Allowed functions

```text
write
```

## Examples

```console
$ ./repeat_alpha "abc"
abbccc
$ ./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabbba 42!$
$ ./repeat_alpha | cat -e
$
```
