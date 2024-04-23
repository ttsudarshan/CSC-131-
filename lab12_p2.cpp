//Claculate sum of time
#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;

public:
    // Function to set the specified value in the object
    void setTime(int h, int m) {
        hours = h;
        minutes = m;
    }

    // Function to display the time object
    void showTime() {
        cout << "Time: " << hours << " hours and " << minutes << " minutes" << endl;
    }

    // Function to sum two time objects and return a new time object
    Time sum(Time t) {
        Time result;
        result.hours = hours + t.hours;
        result.minutes = minutes + t.minutes;

        // Adjusting overflow of minutes to hours
        result.hours += result.minutes / 60;
        result.minutes %= 60;

        return result;
    }
};

int main() {
    
    Time time1, time2, time3;

   
    time1.setTime(3, 45);
    time2.setTime(2, 30);

    
    cout << "Time 1: ";
    time1.showTime();

    cout << "Time 2: ";
    time2.showTime();

    
    time3 = time1.sum(time2);

    // Display the sum
    cout << "Sum of Time 1 and Time 2: ";
    time3.showTime();

    return 0;
}
