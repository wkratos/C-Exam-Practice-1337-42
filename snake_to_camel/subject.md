# snake_to_camel

## Assignment

Write a program that takes a single string in `snake_case` format and converts it into a string in lower camel case format.

A `snake_case` string has each word in lowercase, separated by an underscore (`_`). A lower camel case string begins with a lowercase word, and each following word begins with a capital letter.

> Some details could not be recovered clearly from the original reference.

## Expected file

```text
snake_to_camel.c
```

## Allowed functions

```text
malloc, free, realloc, write
```

## Examples shown

The examples in the reference invoke `camel_to_snake`, despite the assignment and expected filename specifying `snake_to_camel`:

```console
$ ./camel_to_snake "here_is_a_snake_case_word"
hereIsASnakeCaseWord
$ ./camel_to_snake "hello_world" | cat -e
helloWorld$
$ ./camel_to_snake | cat -e
$
```
