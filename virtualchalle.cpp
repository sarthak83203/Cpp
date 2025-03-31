/*
Single File Programming Question
Problem Statement



Prabha needs to create a program for a ticket reservation system. 



Assist her in creating a program that uses the base class Reservation with the virtual function calculate(), which will be overridden in the derived classes VIP and Standard.



VIP reservations receive age-based discounts:

21% for ages 4–12.
15% for ages 13–25.
10% for ages 26–64.


Standard reservations receive age-based discounts:

18% for ages 4–12.
14% for ages 13–25.
5% for ages 26–64.


Write a program that takes input for VIP and standard ticket prices, along with the number of each reservation and the age of the customers. Calculate and display the total prices for both VIP and standard reservations.

Input format :
The first line of input consists of three space-separated values, the price of a VIP ticket (double), the age of the VIP customer (int), and the number of VIP reservations(int).

The second line consists of three space-separated values, the price of a standard ticket (double), the age of the standard customer (int), and the number of standard reservations(int).

Output format :
The first line of output prints "VIP ticket price: Rs.X" where X is a double value, rounded off to two decimal places.

The second line prints "Standard ticket price: Rs.Y" where Y is a double value, rounded off to two decimal places.



Refer to the sample outputs for formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

4 ≤ age ≤ 64

50.0 ≤ price ≤ 2000.0

1 ≤ number of reservations ≤ 100

Sample test cases :
Input 1 :
100.00 18 5
50.50 29 4
Output 1 :
VIP ticket price: Rs.425.00
Standard ticket price: Rs.191.90
Input 2 :
250.00 56 7
150.00 15 10
Output 2 :
VIP ticket price: Rs.1575.00
Standard ticket price: Rs.1290.00
Input 3 :
235.45 5 15
657.96 54 3
Output 3 :
VIP ticket price: Rs.2790.08
Standard ticket price: Rs.1875.19
*/
#include<iostream>
#include<iomanip>
using namespace std;
class Reservation{
    public:
    double ticket;
    int age,no;
     virtual void calculate()=0;
};
class VIP:public Reservation{
    public:
    double discount;
    void calculate(){
       
        if(age>=4 && age<=12){
            discount=(ticket * no  * (1 - 0.21));
            
        }else if(age>=13 && age<=25){
            discount=(ticket * no  * (1 - 0.15));
        }else if(age>=26 && age<=64){
            discount=(ticket * no  * (1 - 0.1));
        }
        cout<<"VIP ticket price: Rs."<<fixed<<setprecision(2)<<discount<<endl;
        
    }
    
};
class Standard:public Reservation{
    public:
   double discount;
    void calculate(){
        
        if(age>=4 && age<=12){
            discount=(ticket * no  * (1 - 0.18));
            
        }else if(age>=13 && age<=25){
            discount=(ticket * no  * (1 - 0.14));
        }else if(age>=26 && age<=64){
            discount=(ticket * no  * (1 - 0.05));
        }
        cout<<"Standard ticket price: Rs."<<fixed<<setprecision(2)<<discount<<endl;
    }
    
};
int main(){
    double ticket,ticketstd;
    int age,no,agestd,nostd;
     cin>>ticket>>age>>no;
     cin>>ticketstd>>agestd>>nostd;
     VIP s1;
     s1.ticket=ticket;
     s1.age=age;
     s1.no=no;
     s1.calculate();
     Standard s2;
     s2.ticket=ticketstd;
     s2.age=agestd;
     s2.no=nostd;
     s2.calculate();
     return 0;  
}
