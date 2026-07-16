# ft_strlcat

> Reconstruction note: This subject was reconstructed from the repository implementation and is not presented as an official original subject.

## Assignment

Reproduce the behavior of `strlcat`: append as much of `src` as will fit in `dest`, given the total destination buffer size `size`, and null-terminate when space permits.

Return the length of the string the function tried to create: the initial length of `dest` plus the length of `src`. If `size` is no greater than the initial destination length, return `size` plus the length of `src`.

## Prototype

```c
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
```

## Expected file

```text
ft_strlcat.c
```

## Allowed functions

```text
None
```
