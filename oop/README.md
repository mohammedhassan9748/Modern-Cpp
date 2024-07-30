# String Class

## Overview

The `String` class provides a custom implementation of a string type in C++. It supports various functionalities including construction, assignment, modification, concatenation, and relational operations. 

## Features

- **Constructors & Destructors:**
  - Default Constructor
  - One-Parameter Constructor
  - Copy Constructor
  - Move Constructor
  - Destructor

- **Assignment Operators:**
  - Copy Assignment
  - Move Assignment
  - Assignment from C-string

- **Modifiers:**
  - `clear()`: Clears the content of the string.
  - `insert(size_t pos, const char* str)`: Inserts a C-string at a specified position.
  - `append(const char* str)`: Appends a C-string to the end of the current string.
  - `operator+=(const char* str)`: Appends a C-string using the `+=` operator.

- **Relational Operators:**
  - `==`, `!=`, `<`, `>`, `<=`, `>=`

- **Non-member Functions:**
  - `operator+(const String& lhs, const String& rhs)`: Concatenates two `String` objects.
  - `operator+(const String& lhs, const char* rhs)`: Concatenates a `String` object with a C-string.
  - `operator+(const char* lhs, const String& rhs)`: Concatenates a C-string with a `String` object.
  - `swap(String& lhs, String& rhs)`: Swaps the content of two `String` objects.

## Testing

### Main Output

The following is the output from the main program that tests the functionality of the `String` class:

