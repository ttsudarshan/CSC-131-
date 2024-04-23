//program to the stats of plane at airport in particular month//
#include<iostream>
using namespace std;

struct MonthInfo {
    int totalLanding;
    int totalDeparting;
    int maxLanding;
    int minLanding;
};

int main() {
    const int numMonths = 12;
    MonthInfo yearInfo[numMonths];

    // Input data for each month
    for (int i = 0; i < numMonths; ++i) {
        cout << "Enter data for Month " << i + 1 << ":" << endl;
        cout << "Total number of planes that landed: ";
        cin >> yearInfo[i].totalLanding;
        cout << "Total number of planes that departed: ";
        cin >> yearInfo[i].totalDeparting;
        cout << "Greatest number of planes that landed in a day: ";
        cin >> yearInfo[i].maxLanding;
        cout << "Least number of planes that landed in a day: ";
        cin >> yearInfo[i].minLanding;
        cout << endl;
    }

    // Calculate averages and totals
    int totalLandingYear = 0;
    int totalDepartingYear = 0;
    int maxLandingOverall = yearInfo[0].maxLanding;
    int minLandingOverall = yearInfo[0].minLanding;
    int maxLandingMonth = 1;
    int minLandingMonth = 1;

    for (int i = 0; i < numMonths; ++i) {
        totalLandingYear += yearInfo[i].totalLanding;
        totalDepartingYear += yearInfo[i].totalDeparting;

        if (yearInfo[i].maxLanding > maxLandingOverall) {
            maxLandingOverall = yearInfo[i].maxLanding;
            maxLandingMonth = i + 1;
        }

        if (yearInfo[i].minLanding < minLandingOverall) {
            minLandingOverall = yearInfo[i].minLanding;
            minLandingMonth = i + 1;
        }
    }

    double averageLanding = static_cast<double>(totalLandingYear) / numMonths;
    double averageDeparting = static_cast<double>(totalDepartingYear) / numMonths;

    // Output results
    cout << "Average monthly number of landing planes: " << averageLanding << endl;
    cout << "Average monthly number of departing planes: " << averageDeparting << endl;
    cout << "Total number of landing planes for the year: " << totalLandingYear << endl;
    cout << "Total number of departing planes for the year: " << totalDepartingYear << endl;
    cout << "Greatest number of planes that landed on any one day: " << maxLandingOverall << " (Month " << maxLandingMonth << ")" << endl;
    cout << "Least number of planes that landed on any one day: " << minLandingOverall << " (Month " << minLandingMonth << ")" << endl;

    return 0;
}
