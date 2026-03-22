🎯 Project: CPool Day 12
Goal: Recreate system commands (cat, grep) and implement Unit Testing.
🛠 Tools
 * cat : Reads and displays files or standard input.
 * grep : Searches for a specific pattern in files or standard input.
 * Criterion : Unit testing library for C.
📂 Structure
 * /cat : Sources and Makefile for the cat binary.
 * /grep : Sources and Makefile for the grep binary.
 * /tests : Unit tests for grep logic.
 * Makefile : Root Makefile to rule them all.
⚙️ Compilation
make            # Compile all binaries
make tests_run  # Execute Criterion tests (in /grep)
make fclean     # Clean all binaries and objects

⚠️ Rules
 * Buffer size: 30,000 bytes.
 * Exit code: 84 on error, 0 on success.
 * Forbidden: malloc, free, printf.
