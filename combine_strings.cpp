//c++ program to combine letters of two strings one after another//
#include <iostream>
#include <cstring>

using namespace std;

// Function to intersperse characters from two strings
char* intersperse(const char* str1, const char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    //memory for the new string
    char* result = new char[len1 + len2 + 1]; // +1 for the null terminator

    int i, j, k;
    for (i = 0, j = 0, k = 0; i < len1 && j < len2; i++, j++) {
        result[k++] = str1[i];
        result[k++] = str2[j];
    }

    //Coping characters from the second string
    while (j < len2) {
        result[k++] = str2[j++];
    }

    // Add null terminator
    result[k] = '\0';

    return result;
}

// Function to widen strngs with ***
char* widen_stars(const char* str1, const char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    //memory for the new string
    char* result = new char[len1 + len2 + 2]; // +2 for the * and null terminator

    int i, k;
    for (i = 0, k = 0; i < len1; i++) {
        result[k++] = str1[i];
        result[k++] = '*';
    }

    // Add the '*' between the two strings
    result[k++] = '*';

    for (int j = 0; j < len2; j++) {
        result[k++] = str2[j];
        if (j != len2 - 1) {
            result[k++] = '*';
        }
    }

    // Add null terminator
    result[k] = '\0';

    return result;
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        cerr << "Usage: " << argv[0] << " <-i or -w>" << endl;
        return 1;
    }

    char str1[31], str2[31];

    cout << "Please enter a string of maximum 30 characters: ";
    cin.getline(str1, 31);

    cout << "Please enter a string of maximum 30 characters: ";
    cin.getline(str2, 31);

    char* combinedString;

    if (strcmp(argv[1], "-i") == 0) {
        combinedString = intersperse(str1, str2);
    } else if (strcmp(argv[1], "-w") == 0) {
        combinedString = widen_stars(str1, str2);
    } else {
        cerr << "Invalid option. Use -i or -w." << endl;
        return 1;
    }

    cout << "The combined string is: " << combinedString << endl;

    // Deallocate memory
    delete[] combinedString;

    return 0;
}
