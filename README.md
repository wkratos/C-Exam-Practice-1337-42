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
├── add_prime_sum/
├── aff_a/
├── do_op/
├── epur_str/
├── expand_str/
├── first_word/
├── ft_atoi/
├── ft_itoa/
├── ft_range/
├── ft_strcapitalize/
├── ft_strlcat/
├── ft_strncpy/
├── ft_strstr/
├── inter/
├── last_word/
├── max/
├── paramsum/
├── repeat_alpha/
├── rev_print/
├── rostring/
├── rot_13/
├── rotone/
├── search_and_replace/
├── snake_to_camel/
├── ulstr/
├── union/
├── wdmatch/
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
