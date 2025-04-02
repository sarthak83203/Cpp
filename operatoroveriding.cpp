#include<iostream>
#include<iomanip>
using namespace std;

class Acceleration {
public:
    double acceleration;  // Acceleration value

    // Constructor to initialize acceleration
    Acceleration(double ap) {
        acceleration = ap;
    }

    // Overloading the * operator to multiply Acceleration with time
    double operator*(double time) {
        return acceleration * time;
    }
};

int main() {
    double velocity, acceleration, time;
    // Take input for initial velocity, acceleration, and time
    cin >> velocity >> acceleration >> time;

    // Create Acceleration object with the provided acceleration
    Acceleration acc(acceleration);

    // Calculate final velocity using overloaded * operator
    double final_velocity = velocity + (acc * time);

    // Display final velocity rounded to 1 decimal place
    cout << fixed << setprecision(1) << final_velocity << " m/s" << endl;

    return 0;
}
