/**
 * @file String.hpp
 * @author Mohamed Ahmed Hassan
 * @brief Header file for the String class, which includes string operations and manipulation methods.
 * @version 0.1
 * @date 2024-07-30
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef STRING_HPP
#define STRING_HPP
#include <cstring>          // For std::strlen and std::strcpy

/**
 * @class String
 * @brief A class to represent and manipulate dynamic strings.
 */
class String
{
private:
    /* Private data */
    
    

public:
    char* str = nullptr; /**< Pointer to the dynamically allocated character array. */
    unsigned long long size = 0; /**< The length of the string. */
    /* Public methods */

    // Constructors & Destructors
    /**
     * @brief Default constructor that initializes an empty String.
     */
    String() = default;

    /**
     * @brief Construct a new String from a C-style string.
     * @param str The C-style string to initialize the String object with.
     */
    explicit String(const char* str);

    /**
     * @brief Copy constructor for creating a new String as a copy of an existing one.
     * @param other The String object to copy.
     */
    String(const String& other);

    /**
     * @brief Move constructor for transferring ownership of resources from another String.
     * @param other The String object to move.
     */
    String(String&& other);

    /**
     * @brief Destructor that releases the dynamically allocated memory.
     */
    ~String();

    // Assignment Operators
    /**
     * @brief Copy assignment operator for assigning the content of one String to another.
     * @param other The String object to assign from.
     * @return String& Reference to this String object.
     */
    String& operator=(const String& other);

    /**
     * @brief Move assignment operator for transferring ownership of resources from another String.
     * @param other The String object to move from.
     * @return String& Reference to this String object.
     */
    String& operator=(String&& other);

    /**
     * @brief Assignment operator for assigning a C-style string to this String object.
     * @param str The C-style string to assign.
     * @return String& Reference to this String object.
     */
    String& operator=(const char* str);

    // Modifiers
    /**
     * @brief Clears the content of the String, making it empty.
     */
    void clear();

    /**
     * @brief Inserts a C-style string into the String at a specified position.
     * @param pos The position at which to insert the new string.
     * @param str The C-style string to insert.
     */
    void insert(size_t pos, const char* str);

    /**
     * @brief Appends a C-style string to the end of the String.
     * @param str The C-style string to append.
     */
    void append(const char* str);

    /**
     * @brief Appends a C-style string to the end of the String using the += operator.
     * @param str The C-style string to append.
     * @return String& Reference to this String object.
     */
    String& operator+=(const char* str);

    // Relational Operators
    /**
     * @brief Equality comparison operator for two String objects.
     * @param lhs The first String object.
     * @param rhs The second String object.
     * @return bool True if the strings are equal, false otherwise.
     */
    friend bool operator==(const String& lhs, const String& rhs);

    /**
     * @brief Inequality comparison operator for two String objects.
     * @param lhs The first String object.
     * @param rhs The second String object.
     * @return bool True if the strings are not equal, false otherwise.
     */
    friend bool operator!=(const String& lhs, const String& rhs);

    /**
     * @brief Less-than comparison operator for two String objects.
     * @param lhs The first String object.
     * @param rhs The second String object.
     * @return bool True if the first string is less than the second, false otherwise.
     */
    friend bool operator<(const String& lhs, const String& rhs);

    /**
     * @brief Greater-than comparison operator for two String objects.
     * @param lhs The first String object.
     * @param rhs The second String object.
     * @return bool True if the first string is greater than the second, false otherwise.
     */
    friend bool operator>(const String& lhs, const String& rhs);

    /**
     * @brief Less-than-or-equal comparison operator for two String objects.
     * @param lhs The first String object.
     * @param rhs The second String object.
     * @return bool True if the first string is less than or equal to the second, false otherwise.
     */
    friend bool operator<=(const String& lhs, const String& rhs);

    /**
     * @brief Greater-than-or-equal comparison operator for two String objects.
     * @param lhs The first String object.
     * @param rhs The second String object.
     * @return bool True if the first string is greater than or equal to the second, false otherwise.
     */
    friend bool operator>=(const String& lhs, const String& rhs);

    // Non-member Functions
    /**
     * @brief Concatenates two String objects.
     * @param lhs The first String object.
     * @param rhs The second String object.
     * @return String The concatenated result.
     */
    friend String operator+(const String& lhs, const String& rhs);

    /**
     * @brief Concatenates a String object with a C-style string.
     * @param lhs The String object.
     * @param rhs The C-style string.
     * @return String The concatenated result.
     */
    friend String operator+(const String& lhs, const char* rhs);

    /**
     * @brief Concatenates a C-style string with a String object.
     * @param lhs The C-style string.
     * @param rhs The String object.
     * @return String The concatenated result.
     */
    friend String operator+(const char* lhs, const String& rhs);

    /**
     * @brief Swaps the content of two String objects.
     * @param lhs The first String object.
     * @param rhs The second String object.
     */
    friend void swap(String& lhs, String& rhs);
};

#endif // STRING_HPP
