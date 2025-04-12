#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
public:
    string name;
    int age;

    virtual void getdata() = 0;
    virtual void putdata() = 0;
};

// Derived class: Professor
class Professor : public Person {
    int publications;
    static int id_counter;
    int cur_id;
public:
    Professor() {
        cur_id = id_counter++;
    }

    void getdata() override {
        cin >> name >> age >> publications;
    }

    void putdata() override {
        cout << name << " " << age << " " << publications << " " << cur_id << endl;
    }
};
int Professor::id_counter = 0;

// Derived class: Student
class Student : public Person {
    int marks[6];
    static int id_counter;
    int cur_id;
public:
    Student() {
        cur_id = id_counter++;
    }

    void getdata() override {
        cin >> name >> age;
        for (int i = 0; i < 6; i++) {
            cin >> marks[i];
        }
    }

    void putdata() override {
        int total = 0;
        for (int i = 0; i < 6; i++) {
            total += marks[i];
        }
        cout << name << " " << age << " " << total << " " << cur_id << endl;
    }
};
int Student::id_counter = 0;

int main() {
    int n;
    cin >> n;
    Person* persons[n];

    for (int i = 0; i < n; i++) {
        int type;
        cin >> type;
        if (type == 1) {
            persons[i] = new Professor();
        } else {
            persons[i] = new Student();
        }
        persons[i]->getdata();
    }

    for (int i = 0; i < n; i++) {
        persons[i]->putdata();
        delete persons[i]; // Free memory
    }

    return 0;
}
