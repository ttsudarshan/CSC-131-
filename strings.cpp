//a program that implements four of the string library functions using pointers: strcpy (string copy), strcat 
//(string concatenate), strcmp (string compare), and strlen (string length). First, the program will ask the user to 
//enter two strings with a maximum of 50 characters each. The program will then output the length of each string. 
//Then, it will output which string comes first alphabetically. The program will then copy string 1 into string 2 an  d 
//output the two strings. Finally, the program will add string 1 to string 2 and print the two strings again. 


//project 7
#include <iostream>

using namespace std;

// Function prototypes
size_t strlen(const char* str);
char* strcpy(char* dest, const char* src);
char* strcat(char* dest, const char* src);
int strcmp(const char* str1, const char* str2);

int main() {
    // Input strings
    char string1[51];
    char string2[51];

    // Get user input
    cout << "Please enter the first string: ";
    cin >> string1;

    cout << "Please enter the second string: ";
    cin >> string2;

    // Calculate and print lengths
    cout << "The length of string 1 is: " << strlen(string1) << endl;
    cout << "The length of string 2 is: " << strlen(string2) << endl;

    // Compare strings and print result
    int result = strcmp(string1, string2);
    if (result == 0) {
        cout << "The two strings are the same." << endl;
    } else if (result == 1) {
        cout << "String 1 comes before string 2 alphabetically." << endl;
    } else {
        cout << "String 2 comes before string 1 alphabetically." << endl;
    }

    // Concatenate strings and print result
    strcat(string2, string1);
    cout << "String 1 after concatenation: " << string1 << endl;
    cout << "String 2 after concatenation: " << string2 << endl;

    // Copy string 1 to string 2 and print result
    strcpy(string2, string1);
    cout << "String 1 after copying: " << string1 << endl;
    cout << "String 2 after copying: " << string2 << endl;

    return 0;
}

// Function definitions

size_t strlen(const char* str) {
    const char* ptr = str;
    while (*ptr != '\0') {
        ++ptr;
    }
    return ptr - str;
}
//copy
char* strcpy(char* dest, const char* src) {
    char* originalDest = dest;
    while (*src != '\0') {
        *dest = *src;
        ++dest;
        ++src;
    }
    *dest = '\0';  // Add null terminator
    return originalDest;
}
//concatenation
char* strcat(char* dest, const char* src) {
    char* originalDest = dest;
    while (*dest != '\0') {
        ++dest;
    }
    while (*src != '\0') {
        *dest = *src;
        ++dest;
        ++src;
    }
    *dest = '\0';  // Add null terminator
    return originalDest;
}
//compare
int strcmp(const char* str1, const char* str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 < *str2) {
            return 1;
        } else if (*str1 > *str2) {
            return -1;
        }
        ++str1;
        ++str2;
    }
    if (*str1 == '\0' && *str2 != '\0') {
        return 1;
    } else if (*str1 != '\0' && *str2 == '\0') {
        return -1;
    }
    return 0;
}
