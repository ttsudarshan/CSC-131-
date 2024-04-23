//to guess the square root of a number
#include <iostream>
#include <cmath> // Use cmath for fabs and pow
#include <iomanip> // For formatting output

using namespace std;

int main(void) {
    double n;
    double initial_guess = 1.0;
    double newguess = initial_guess; // Initialize newguess

    // User input
    cout << "Enter a positive number: ";
    cin >> n;
    
    // Output initial guess
    cout << fixed << setprecision(5) << initial_guess << endl;

    // Use a while loop to improve the guess
    while (fabs(newguess * newguess - n) >= 1e-5) {
        newguess = (newguess + n / newguess) / 2.0;
        cout << fixed << setprecision(5) << newguess << endl;
    }

    // Output the estimated square root
    cout << "Estimated square root of " << n << ": " << fixed << setprecision(5) << newguess << endl;

    return 0;
}
