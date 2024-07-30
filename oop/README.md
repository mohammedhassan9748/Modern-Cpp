Here's the combined `README.md` with the provided content and additional learnings:

```markdown
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

```
Testing Default Constructor:
Default constructor: Size = 0, Content = "nullptr"

Testing One Parameter Constructor:
One parameter constructor: Size = 5, Content = "Hello"

Testing Copy Constructor:
Copy constructor: Size = 5, Content = "Hello"

Testing Move Constructor:
Move constructor: Size = 5, Content = "Hello"
Moved from: Size = 0, Content = "nullptr"

Testing Copy Assignment Operator:
Assignment operator: Size = 5, Content = "Hello"

Testing Move Assignment Operator:
Move assignment operator: Size = 5, Content = "Hello"
Moved from: Size = 0, Content = "nullptr"

Testing Append Method:
After append: Size = 12, Content = "Hello World!"

Testing Insert Method:
After insert: Size = 22, Content = "Hello Beautiful World!"

Testing Relational Operators:
Equality: True
Inequality: False
Less than: False
Greater than: False
Less than or equal: True
Greater than or equal: True

Testing Concatenation with String:
Concatenation with String: Size = 35, Content = "Hello Beautiful World! How are you?"

Testing Concatenation with C-string:
Concatenation with C-string: Size = 34, Content = "Hello Beautiful World! Let's test!"

Testing Concatenation with C-string on left:
Concatenation with C-string on left: Size = 29, Content = "Prefix Hello Beautiful World!"

Testing Swap Function:
After swap:
str9: Size = 34, Content = "Prefix Hello Beautiful World!"
str10: Size = 29, Content = "Hello Beautiful World! Let's test!"

Testing Clear Method:
After clear: Size = 0, Content = "nullptr"
```

## Compilation

To compile the `String` class and test it, use the following command:

```bash
g++ main.cpp String.cpp -o main
```

Then run the compiled executable:

```bash
./main
```

## Learnings from the Exercise

- **Memory Management**: Learned how to manage dynamic memory allocation and deallocation in C++.
- **Custom String Implementation**: Gained experience in implementing a custom string class and handling string operations.
- **Operator Overloading**: Implemented various operator overloads, including relational and concatenation operators.
- **Copy and Move Semantics**: Understood the importance of proper copy and move constructors/assignment operators for managing resources.
- **Exception Safety**: Improved knowledge of ensuring exception safety in resource management.

---

This README covers the overview, features, test output, compilation instructions, and what was learned from the exercise.