//lab 8 program 2
#include <iostream>
#include <iomanip>

using namespace std;
//calculation
void calculateStats(double temperatures[], int size, double& average, double& highest, double& lowest) {
 
    average = 0.0;
    highest = temperatures[0];
    lowest = temperatures[0];

    // Calculate sum of temperatures
    for (int i = 0; i < size; ++i) {
        average += temperatures[i];

        //highest temperature
        if (temperatures[i] > highest) {
            highest = temperatures[i];
        }

        //lowest temperature
        if (temperatures[i] < lowest) {
            lowest = temperatures[i];
        }
    }

    // Calculate average
    average /= size;
}

int main() {
    int numTemperatures;

    // Input the number of temperatures
    cout << "Please input the number of temperatures to be read\n";
    cin >> numTemperatures;



    double *temperatures = new double[numTemperatures];

    // Input temperatures
    for (int i = 0; i < numTemperatures; ++i) {
        cout << "Input temperature " << i + 1 << ":\n";
        cin >> temperatures[i];
    }

    // Calculate statistics
    double average, highest, lowest;
    calculateStats(temperatures, numTemperatures, average, highest, lowest);

    // Display results
    cout << fixed << setprecision(2);
    cout << "The average temperature is: " << average << "\n";
    cout << "The highest temperature is: " << highest << "\n";
    cout << "The lowest temperature is: " << lowest << "\n";

    // Deallocate the dynamically allocated array
    delete[] temperatures;

    return 0; // Return success code
}
