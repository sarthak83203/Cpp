#include <iostream>
#include <iomanip>
using namespace std;

class Calculations {
public:
    double distance;
    virtual double amount() = 0;
    virtual double Time() = 0;
    virtual void display() = 0;
};

// Scooty class
class Scooty : public Calculations {
public:
    double amount() override {
        double total = distance * 100; // Rs.100/km
        return total - (0.05 * total); // 5% discount
    }

    double Time() override {
        return distance / 40.0; // 40 km/hr
    }

    void display() override {
        cout << "Scooty\n";
        cout << fixed << setprecision(2);
        cout << "Time Taken(in hours) : " << Time() << endl;
        cout << "Amount : " << amount() << endl;
    }
};

// Bike class
class Bike : public Calculations {
public:
    double amount() override {
        double total = distance * 150; // Rs.150/km
        return total - (0.10 * total); // 10% discount
    }

    double Time() override {
        return distance / 60.0; // 60 km/hr
    }

    void display() override {
        cout << "Bike\n";
        cout << fixed << setprecision(2);
        cout << "Time Taken(in hours) : " << Time() << endl;
        cout << "Amount : " << amount() << endl;
    }
};

// Car class
class Car : public Calculations {
public:
    double amount() override {
        double total = distance * 200; // Rs.200/km
        return total - (0.20 * total); // 20% discount
    }

    double Time() override {
        return distance / 80.0; // 80 km/hr
    }

    void display() override {
        cout << "Car\n";
        cout << fixed << setprecision(2);
        cout << "Time Taken(in hours) : " << Time() << endl;
        cout << "Amount : " << amount() << endl;
    }
};

// Main function
int main() {
    double dist;
    cin >> dist;

    Scooty s;
    Bike b;
    Car c;

    s.distance = b.distance = c.distance = dist;

    s.display();
    b.display();
    c.display();

    return 0;
}
