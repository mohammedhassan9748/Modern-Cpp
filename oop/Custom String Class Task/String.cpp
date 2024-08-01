/**
 * @file String.cpp
 * @author Mohamed Ahmed Hassan
 * @brief Create Class "String" that behaves like string totally from scratch.
 * @version 0.1
 * @date 2024-07-30
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "String.hpp"
#include <cstring>          // For std::strlen and std::strcpy

/* ************** */
/* public methods */
/* ************** */

/* 
 * ***********************************************************************************
 * *************************** Constructors & Destructors ****************************
 * ***********************************************************************************
 */

// 

String::String(const char* str)
{   
    if(str)
    {
        // Initialize the string size
        this->size = strlen(str);

        // Allocate heap memory for this string
        this->str = new char[size+1];
        
        // Copy data into the allocated memory using strcpy_s
        strcpy_s(this->str, size + 1, str);
    }
    else{
        this->size = 0;
        this->str = nullptr;
    }

}            

String::String(const String& other)
{
    if(other.str)
    {
        // Initialize the string size
        this->size = strlen(other.str);

        // Allocate heap memory for this string
        this->str = new char[size+1];
        
        // Copy data into the allocated memory using strcpy_s
        strcpy_s(this->str, size + 1, other.str);
    }
    else{
        this->size = 0;
        this->str = nullptr;
    }
}        

String::String(String&& other) : str(other.str), size(other.size)
{
    other.size = 0;
    other.str = nullptr;
}    

String::~String()
{
    delete[] this->str;
}                                      

/* 
 * ***********************************************************************************
 * ****************************** Assignment Operators *******************************
 * ***********************************************************************************
 */

String& String::operator=(const String& other)
{
    if(this != &other)
    {
        if(this->str)
        {
            // Delete if any allocated data for the string before copying
            delete[] this->str;
        }
        if(other.str)
        {
            // Initialize the string size
            this->size = strlen(other.str);

            // Allocate heap memory for this string
            this->str = new char[size+1];
            
            // Copy data into the allocated memory using strcpy_s
            strcpy_s(this->str, size + 1, other.str);
        }
        else{
            this->size = 0;
            this->str = nullptr;
        }
    }
    return *this;
}      

String& String::operator=(String&& other)
{
    if(this != &other)
    {   
        if(this->str)
        {
            // Delete if any allocated data for the string before copying
            delete[] this->str;
        }
        // Move the size
        this->size = other.size;
        other.size = 0;

        // Move the str pointer
        this->str = other.str;
        other.str = nullptr;
    }
    return *this; 
}          

String& String::operator=(const char* str)
{
    if(this->str != str)
    {
        if(this->str)
        {
            // Delete if any allocated data for the string before copying
            delete[] this->str;
        }
        if(str)
        {
            // Initialize the string size
            this->size = strlen(str);

            // Allocate heap memory for this string
            this->str = new char[size+1];
            
            // Copy data into the allocated memory using strcpy_s
            strcpy_s(this->str, size + 1, str);
        }
        else{
            this->size = 0;
            this->str = nullptr;
        }
    }
    return *this;
}        

/* 
 * ***********************************************************************************
 * ****************************** Relational Operators *******************************
 * ***********************************************************************************
 */


bool operator==(const String& lhs, const String& rhs)
{
    return std::strcmp(lhs.str,rhs.str) == 0;
}


bool operator!=(const String& lhs, const String& rhs)
{
    return std::strcmp(lhs.str,rhs.str) != 0;
}

bool operator<(const String& lhs, const String& rhs)
{
    return std::strcmp(lhs.str,rhs.str) < 0;
}

bool operator>(const String& lhs, const String& rhs)
{
    return std::strcmp(lhs.str,rhs.str) > 0;
}

bool operator<=(const String& lhs, const String& rhs)
{
    return lhs < rhs || lhs == rhs;
}


bool operator>=(const String& lhs, const String& rhs)
{
    return lhs > rhs || lhs == rhs;
}

/* 
 * ***********************************************************************************
 * ****************************** Non-member Functions *******************************
 * ***********************************************************************************
 */

String operator+(const String& lhs, const String& rhs)
{
    String result;
    
    // Handle empty lhs or rhs
    if (!lhs.str) {
        result.size = rhs.size;
        result.str = new char[result.size + 1];
        if (rhs.str) {
            strcpy_s(result.str, result.size + 1, rhs.str);
        } else {
            result.str[0] = '\0';
        }
        return result;
    }
    
    if (!rhs.str) {
        result.size = lhs.size;
        result.str = new char[result.size + 1];
        strcpy_s(result.str, result.size + 1, lhs.str);
        return result;
    }
    
    // Normal case
    result.size = lhs.size + rhs.size;
    result.str = new char[result.size + 1];
    strcpy_s(result.str, lhs.size + 1, lhs.str);
    strcpy_s(result.str + lhs.size, rhs.size + 1, rhs.str);
    
    return result;
}
String operator+(const String& lhs, const char* rhs)
{
    String result;
    
    // Handle null rhs
    if (!rhs) {
        result.size = lhs.size;
        result.str = new char[result.size + 1];
        if (lhs.str) {
            strcpy_s(result.str, result.size + 1, lhs.str);
        } else {
            result.str[0] = '\0';
        }
        return result;
    }
    
    size_t rhs_size = strlen(rhs);
    result.size = lhs.size + rhs_size;
    result.str = new char[result.size + 1];
    
    if (lhs.str) {
        strcpy_s(result.str, lhs.size + 1, lhs.str);
    }
    strcpy_s(result.str + lhs.size, rhs_size + 1, rhs);
    
    return result;
}
String operator+(const char* lhs, const String& rhs)
{
    String result;
    
    // Handle null lhs
    if (!lhs) {
        result.size = rhs.size;
        result.str = new char[result.size + 1];
        if (rhs.str) {
            strcpy_s(result.str, result.size + 1, rhs.str);
        } else {
            result.str[0] = '\0';
        }
        return result;
    }
    
    size_t lhs_size = strlen(lhs);
    result.size = rhs.size + lhs_size;
    result.str = new char[result.size + 1];
    
    strcpy_s(result.str, lhs_size + 1, lhs);
    if (rhs.str) {
        strcpy_s(result.str + lhs_size, rhs.size + 1, rhs.str);
    }
    
    return result;
}

void swap(String& lhs, String& rhs)
{
    char* str_tmp = nullptr;
    unsigned long long size_tmp = 0;

    str_tmp = lhs.str;
    size_tmp = lhs.size;

    lhs.str = rhs.str;
    lhs.size = rhs.size;
    
    rhs.str = str_tmp;
    lhs.size = size_tmp;
}

/* 
 * ***********************************************************************************
 * *********************************** Modifiers *************************************
 * ***********************************************************************************
 */


void String::clear()
{
    if(str)
    {
        delete[] this->str;
    }
    this->str = nullptr;
    this->size = 0;
}
void String::insert(size_t pos, const char* str)
{
    if(!str || pos > this->size) return;

    int new_size = strlen(str) + this->size;
    char* new_str = new char[new_size + 1]; // Allocate new memory for the concatenated string
    
    if (this->str)
    {
        // Copy the part of the original string before the insertion position
        std::memcpy(new_str,this->str,pos);
         
        // Copy the new string at the insertion position
        std::memcpy(new_str + pos,str,strlen(str));

        // Copy the remaining part of the original string after the insertion position
        std::memcpy(new_str + pos + strlen(str), this->str + pos, this->size - pos);

        new_str[new_size] = '\0';
    }
    else
    {   
        if(pos == 0)
        {
            // Initialize with an empty string if the original string was nullptr
            new_str[0] = '\0'; 
            // Append the new string
            strcat_s(new_str, new_size + 1, str); 
        }
    }

    delete[] this->str; // Free the old memory
    this->str = new_str; // Point to the new memory
    this->size = new_size; // Update the size
    return;
}
void String::append(const char* str)
{
    *this = *this+str;
    return;
}
String& String::operator+=(const char* str)
{
    // Use the append function to add the C-style string to the current String object
    this->append(str);
    return *this;
}