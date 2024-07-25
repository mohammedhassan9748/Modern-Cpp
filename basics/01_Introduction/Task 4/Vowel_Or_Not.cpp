#include <iostream>
#include <cctype> // For tolower function

/*
* Task: Decide if the letter is a vowel or not.
*/

int main() {
    char letter = 0;
    bool isVowel = false;

    std::cout << "Please Enter a Letter: ";
    std::cin >> letter;

    // Convert the letter to lowercase to handle case-insensitivity
    letter = std::tolower(letter);

    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};

    for(char vowel : vowels) {
        if(letter == vowel) {
            isVowel = true;
            break;
        }
    }

    if(isVowel) {
        std::cout << "This is a vowel" << std::endl;
    } else {
        std::cout << "This is NOT a vowel" << std::endl;
    }

    return 0;
}
