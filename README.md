# Simple Calculator

This is a simple command-line calculator program written in C++. It allows users to perform basic arithmetic operations: addition, subtraction, multiplication, and division.

## Description

The Simple Calculator program demonstrates basic C++ concepts such as class definitions, member functions, and exception handling. Users input two numbers and choose an operation, and the program outputs the result. Division by zero is handled with an appropriate error message.

## Features

- Addition
- Subtraction
- Multiplication
- Division (with error handling for division by zero)

## Files

- `main.cpp`: The main program file that interacts with the user.
- `calculator.h`: The header file containing the `Calculator` class definition.
- `calculator.cpp`: The source file implementing the `Calculator` class methods.

## Getting Started

### Prerequisites

- A C++ compiler, such as g++.

### Building the Program

1. Clone the repository or download the source code.
2. Open a terminal and navigate to the directory containing the source files.
3. Compile the program using the following command:

    ```sh
    g++ -o calculator main.cpp calculator.cpp
    ```

4. Run the executable:

    ```sh
    ./calculator
    ```

### Usage

1. Run the program.
2. Enter the first number when prompted.
3. Enter the second number when prompted.
4. Enter the desired operation (`+`, `-`, `*`, `/`) when prompted.
5. The result of the operation will be displayed.
6. Choose whether to perform another calculation by entering `y` (yes) or `n` (no).

### Example

```sh
Please enter your first number:
10
Please enter your second number:
5
Please choose operation (+, -, *, /):
+
Result
