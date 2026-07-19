# ft_range

> Reconstruction note: This subject was reconstructed from the repository implementation and is not presented as an official original subject.

## Assignment

Write a function that allocates and returns an array of consecutive integers beginning at `start` and ending at `end`, inclusive.

The sequence increases when `start` is less than `end` and decreases when `start` is greater than `end`. When both values are equal, the returned array contains that value once. Return `NULL` if allocation fails.

## Prototype

```c
int *ft_range(int start, int end);
```

## Expected file

```text
ft_range.c
```

## Allowed functions

```text
malloc
```
