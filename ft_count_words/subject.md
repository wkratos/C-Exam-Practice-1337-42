# ft_count_words

## Assignment

Write a separator-checking helper and a function that counts the words in a string.

`is_separator` takes a character and returns whether it is not a word separator. A word is separated by spaces (`' '`) or tabs (`'\t'`). If `c` is a space or tab, return `0`; otherwise return `1`.

`ft_count_words` takes a string and counts the number of words inside it. A word is a sequence of characters that are not spaces or tabs. Return the total number of words.

## Prototype

```c
int is_separator(char c);
int ft_count_words(char *str);
```

## Expected file

```text
ft_count_words.c
```

## Allowed functions

```text
None shown
```

## Examples

```text
ft_count_words("hello world") --> 2
ft_count_words("   hello   world   ") --> 2
ft_count_words("42  school") --> 2
ft_count_words("   ") --> 0
ft_count_words("") --> 0
```
