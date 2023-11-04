# 0x0C. C - More malloc, free

## Description

This repository contains C programs that demonstrate the usage of dynamic memory allocation and deallocation in C programming language. The programs cover various aspects of \`malloc\`, \`free\`, and related concepts, showcasing how to manage memory dynamically.

## Content

- **0-malloc_checked.c:**
  A function that allocates memory using \`malloc\`. It returns a pointer to the allocated memory, and in case of failure, it exits with a status value of 98.

- **1-string_nconcat.c:**
  A function that concatenates two strings. It concatenates \`n\` bytes from the second string to the first string.

- **2-calloc.c:**
  A function that simulates the behavior of \`calloc\` by allocating memory for an array using \`malloc\` and setting all the memory to zero.

- **3-array_range.c:**
  A function that creates an array of integers. It creates an array containing all the values from \`min\` to \`max\`, inclusive.

## Compilation

These programs can be compiled using \`gcc\`. For example:

\`\`\`bash
gcc -Wall -Werror -Wextra -pedantic *.c -o dynamic_memory
\`\`\`

## Usage

After compiling, you can run the programs like this:

\`\`\`bash
./dynamic_memory
\`\`\`

## Author

[Your Name]"

