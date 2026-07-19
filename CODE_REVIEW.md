# Code Review

## Summary

This pass focused on repository organization and on minor correctness fixes needed for strict compilation with `cc -Wall -Wextra -Werror`.

## Exercises reviewed

| Exercise | Compilation result | Subject compliance | Differences from reference | Modifications made | Reason for modification | Unresolved issues |
|---|---|---|---|---|---|---|
| 03__add_prime_sum | pass | compliant | minor style differences | replaced `return ;` with `return (0)` and added explicit `return (0)` at end | fix invalid `return` in `main` and restore proper function return | none |
| 03__expand_str | pass | compliant | minor style differences | removed unused `j` variable | fix `-Werror=unused-variable` | none |
| 02__ft_atoi | pass | compliant | minor style differences | added parentheses around `&&`/`||` expression | fix `-Werror=parentheses` | none |
| 03__ft_range | pass | compliant | minor style differences | added missing semicolon after `i = 0` | fix syntax error | none |
| 03__str_capitalizer | pass | compliant | minor style differences | added missing semicolon before closing brace | fix syntax error | none |
| inter_space | pass | compliant | minor style differences | removed unused `size` variable | fix `-Werror=unused-but-set-variable` | none |
| 02__max | pass | compliant | minor style differences | cast `len` to `int` in comparison | fix signed/unsigned comparison warning | none |
| 03__paramsum | pass | compliant | minor style differences | cast unused `ag` parameter with `(void)ag` | fix `-Werror=unused-parameter` | none |

## Exercises not confidently matched

The following exercises were left unchanged because the reference repository did not provide a clear official match or the naming was ambiguous:

- alt_case
- even
- ft_count_words
- ft_interval
- ft_str_is_numeric
- ft_strlcat
- ft_strncpy
- ft_strstr
- inter_space
- is_separator
- operations
- snake
- snake_to_camel
- zigzag
- wdmatch_alt (kept as a variant rather than renamed as a separate official exercise)
