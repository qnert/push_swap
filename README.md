# push_swap

This project involves building a program in C, named `push_swap`, that takes a list of integers (forming a stack) as input and sorts them in ascending order with the fewest possible operations. The sorting process involves two stacks, `a` and `b`, and specific stack operations to efficiently rearrange elements in `stack a`.

---

## Overview

The `push_swap` program takes a list of integers as input, placing the first argument at the top of stack `a` and leaving stack `b` empty. The objective is to sort stack `a` in ascending order using only a predefined set of operations and achieving the fewest possible moves.

### Allowed Operations

- **Swap Operations**
  - `sa` : Swap the first two elements of stack `a`.
  - `sb` : Swap the first two elements of stack `b`.
  - `ss` : Perform both `sa` and `sb` simultaneously.

- **Push Operations**
  - `pa` : Push the top element from stack `b` onto stack `a`.
  - `pb` : Push the top element from stack `a` onto stack `b`.

- **Rotate Operations**
  - `ra` : Rotate all elements in stack `a` upward by 1 (first element becomes last).
  - `rb` : Rotate all elements in stack `b` upward by 1.
  - `rr` : Perform both `ra` and `rb` simultaneously.

- **Reverse Rotate Operations**
  - `rra` : Rotate all elements in stack `a` downward by 1 (last element becomes first).
  - `rrb` : Rotate all elements in stack `b` downward by 1.
  - `rrr` : Perform both `rra` and `rrb` simultaneously.

### Example Usage

```bash
$ ./push_swap 2 1 3 6 5 8
sa
pb
pb
pb
sa
pa
pa
pa
```
---

## Key Requirements

- **Input Validation**: The program verifies input integers for correctness, including checking for duplicate values, non-integer values, and values exceeding integer limits. Errors are output to standard error.
- **Optimal Sorting**: `push_swap` aims to sort the stack with the fewest operations possible. Each operation is printed on a new line (`\n`).
- **Error Handling**: In case of invalid input, the program outputs `Error` followed by a newline and returns to the prompt.
- **Memory Management**: All heap-allocated memory is properly freed to prevent memory leaks.
- **No Output for No Input**: If no parameters are provided, the program does not produce any output.

## Project Requirements

- **Programming Language**: Written in C and adheres to the specified Norm requirements.
- **Compilation**: A Makefile is provided with the targets `all`, `clean`, `fclean`, `re`, and `bonus`. The Makefile must not allow relinking.
- **Forbidden Elements**: Global variables and external libraries (other than `libft`, if allowed) are not permitted.
