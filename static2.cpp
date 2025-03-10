/*
Single File Programming Question
Problem Statement



Bobby is developing a simple program using a class named Demo to manage two static integer values, X and Y. Initially, these static members are set to 10 and 20, respectively. In the program, Bobby wants to allow users to update these static values dynamically by inputting new integers. 



Your task is to help Bobby to create a class includes two static member functions: get(), which accepts new values for X and Y from the user, and fun(), which displays the current values of X and Y. The program should first show the initial values, allow the user to input new values, and then display the updated values.

Input format :
The first line of input consists of the value of X.

The second line of input consists of the value of Y.

Output format :
The first line of output prints "Value of X: " followed by an integer representing the value of X.

The second line of output prints "Value of Y: " followed by an integer representing the value of Y.



Refer to the sample outputs for the formatting specifications.

Code constraints :
The initial default values of X and Y are set to 10 and 20, respectively.

1 ≤ X, Y ≤ 105

Sample test cases :
Input 1 :
250
350
Output 1 :
Value of X: 10
Value of Y: 20
Value of X: 250
Value of Y: 350
Input 2 :
240
840
Output 2 :
Value of X: 10
Value of Y: 20
Value of X: 240
Value of Y: 840
*/
//ANS

#include<iostream>
using namespace std;
class Demo{
  public:
  static int X,Y;
  static void get();
  static void fun();
};
int Demo::X=10;
int Demo::Y=20;
void Demo::get(){
    cin>>X>>Y;
}
void Demo::fun(){
    cout<<"Value of X: "<<X<<endl;
    cout<<"Value of Y: "<<Y<<endl;
}

int main(){
    Demo::fun();
    Demo::get();
    Demo::fun();
    return 0;
    
}