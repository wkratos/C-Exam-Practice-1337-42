<div align="center">

# C Practice — 1337 / 42

A curated collection of C exercises completed while preparing for the **1337 / 42 Piscine** and **Final Exam**.

![Language](https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c&logoColor=white)
![School](https://img.shields.io/badge/School-1337%20%7C%2042-000000?style=for-the-badge&logo=42&logoColor=white)
![Exercises](https://img.shields.io/badge/Exercises-40+-success?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Active-success?style=for-the-badge)
![Subjects](https://img.shields.io/badge/Exercise%20Subjects-Included-blue?style=for-the-badge)

</div>

---

# About

This repository contains a collection of C programming exercises that I solved while preparing for the **1337 / 42 Piscine** and the **42 Final Exam**.

The goal of this repository is simple:

- Practice common exam exercises
- Improve algorithmic thinking
- Strengthen C fundamentals
- Build speed before the final exam
- Keep a personal archive of solved exercises

Every exercise lives inside its own directory and includes its corresponding subject whenever available.

---

# Topics Covered

The repository covers many of the concepts repeatedly found during the Piscine and Exam sessions.

### Strings

- String manipulation
- Character replacement
- String comparison
- Word extraction
- String rotation
- Capitalization
- ROT13
- Camel case
- Snake case

---

### Memory

- Dynamic allocation
- Integer ranges
- Integer to string conversion
- String duplication

---

### Pointers

- Pointer manipulation
- Arrays
- Character pointers

---

### Algorithms

- Prime numbers
- Word counting
- Number conversion
- Searching
- Basic parsing
- Simple data processing

---

### Command Line Arguments

Many exercises require processing `argc` and `argv`, handling invalid input and printing the correct output.

---

# Repository Structure

```text
C-Practice-1337-42
│
├── 00__aff_a/
├── 00__ft_countdown/
├── 00__ft_print_numbers/
├── 01__first_word/
├── 01__fizzbuzz/
├── 01__ft_putstr/
├── 01__ft_strlen/
├── 01__ft_swap/
├── 01__repeat_alpha/
├── 01__rev_print/
├── 01__rot_13/
├── 01__rotone/
├── 01__search_and_replace/
├── 01__ulstr/
├── 02__do_op/
├── 02__ft_atoi/
├── 02__ft_strdup/
├── 02__ft_strcmp/
├── 02__ft_strrev/
├── 02__inter/
├── 02__is_power_of_2/
├── 02__last_word/
├── 02__max/
├── 02__print_bits/
├── 02__reverse_bits/
├── 02__swap_bits/
├── 02__union/
├── 02__wdmatch/
├── 03__add_prime_sum/
├── 03__epur_str/
├── 03__expand_str/
├── 03__ft_atoi_base/
├── 03__ft_list_size/
├── 03__ft_range/
├── 03__ft_rrange/
├── 03__hidenp/
├── 03__lcm/
├── 03__paramsum/
├── 03__pgcd/
├── 03__print_hex/
├── 03__rstr_capitalizer/
├── 03__str_capitalizer/
├── 03__tab_mult/
├── 04__fprime/
├── 04__ft_itoa/
├── 04__ft_list_foreach/
├── 04__ft_list_remove_if/
├── 04__ft_split/
├── 04__rev_wstr/
├── 04__rostring/
├── 04__sort_int_tab/
├── 04__sort_list/
├── 05__brackets/
├── 05__ft_itoa_base/
├── 05__options/
├── 05__print_memory/
├── 05__rpn_calc/
└── ...
```

Each folder contains:

- the implementation
- the exercise subject (when available)

---

# Compilation

Most exercises can be compiled independently.

Example:

```bash
cc -Wall -Wextra -Werror repeat_alpha.c -o repeat_alpha
```

Run:

```bash
./repeat_alpha "abc"
```

---

# Recommended Practice

The best way to use this repository is:

1. Read the subject.
2. Solve the exercise yourself.
3. Compile using

```bash
cc -Wall -Wextra -Werror
```

4. Test edge cases.
5. Compare your solution with mine.
6. Rewrite it later without looking.

Learning comes from solving the problem first—not from reading the answer.

---

# Useful Commands

Compile

```bash
cc -Wall -Wextra -Werror file.c -o program
```

Norminette

```bash
norminette file.c
```

Memory checking

```bash
valgrind --leak-check=full ./program
```

---

# Disclaimer

These are **personal practice solutions** created while preparing for the 1337 / 42 curriculum.

Exercise statements may differ slightly depending on the campus or exam version.

This repository is intended as a learning resource and should not replace solving the exercises independently.

---

# Contributing

Improvements are welcome.

If you notice:

- a mistake in a subject
- a typo
- a missing subject
- a better explanation

feel free to open an issue or submit a pull request.

---

# Author

- GitHub: https://github.com/wkratos

---

<div align="center">

⭐ If this repository helped you prepare for the 42 Exam, consider giving it a star!

Good luck, and happy coding!

</div>
