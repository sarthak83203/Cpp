/*
Single File Programming Question
Problem Statement



Joe is developing a program to compare the estimated ranges of gas and electric cars. He wants to help users make informed decisions about purchasing these vehicles. Help him write a program using multi-level inheritance. 



The program features three classes: 

class Vehicle - Holds fuel capacity as an attribute.
class Car - Derived from class Vehicle, it holds fuel efficiency as an attribute and calculates its range based on fuel capacity and efficiency.
class ElectricCar - Derived from class Car, it holds battery capacity as an attribute and calculates its range using battery capacity and fuel efficiency. 


The program calculates the estimated range for both types of cars. 



Formulas

Car range = Fuel efficiency * Fuel capacity
Electric car range = Battery capacity * Fuel efficiency
Input format :
The first line of input consists of two space-separated double values, representing the fuel capacity and fuel efficiency of a car.

The second line consists of two space-separated double values, representing the battery capacity and fuel efficiency of an electric car.

Output format :
The first line of output prints "Car Estimated Range: X miles" where X is a double-value, rounded off to one decimal place.

The second line prints "Electric Car Estimated Range: Y miles" where Y is a double-value, rounded off to one decimal place.



Refer to the sample outputs for formatting specifications.

Code constraints :
1.0 ≤ fuel capacity, efficiency ≤ 100.0

1.0 ≤ battery capacity, fuel efficiency ≤ 100.0

Sample test cases :
Input 1 :
10.5 25.0
80.0 4.5 
Output 1 :
Car Estimated Range: 262.5 miles
Electric Car Estimated Range: 360.0 miles
Input 2 :
8.0 28.0
50.0 4.00 
Output 2 :
Car Estimated Range: 224.0 miles
Electric Car Estimated Range: 200.0 miles
*/
#include<iostream>
#include<iomanip>
using namespace std;
class Vehicle{
    public:
    float fuelcap;
    Vehicle(float p){
        fuelcap=p;
    }
};
class Car:public Vehicle{
    public:
    float fueleff;
    Car(float p,float q):Vehicle(p){
        fueleff=q;
    }
    void calculates(){
        cout<<"Car Estimated Range: "<<fixed<<setprecision(1)<<fueleff * fuelcap<<" miles"<<endl;
    }
    
};
class ElectricCar:public Car{
    public:
    float Batterycap,electriceff;
    ElectricCar(float p,float q,float r,float s):Car(p,q){
        Batterycap=r;
        electriceff=s;
    }
    void calculates1(){
        cout<<"Electric Car Estimated Range: "<<fixed<<setprecision(1)<<Batterycap * electriceff<<" miles";
    }
    
};
int main(){
    float e,r,rt,er;
    cin>>e>>r; //fuelcap and fueleff
    cin>>er>>rt; //batterycap and fueleff.
    ElectricCar s1(e,r,er,rt);
    s1.calculates();
    s1.calculates1();
    return 0;
    
    
    
}