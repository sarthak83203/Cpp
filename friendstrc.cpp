/*
Single File Programming Question
Problem Statement



Sam is writing a program that takes the speed (in km/h) and the time (in hours) as input and calculates the distance travelled. Your task is to guide him in creating a class called Distance with speed and time as public attributes. Using a friend function calcDistance(), the program should calculate the total distance travelled.

Input format :
The input consists of two space-separated integers, representing the speed(in km/h) and time(in hours).

Output format :
The output prints a single double value, representing the calculated distance, rounded off to two decimal places.



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ speed, time ≤ 500

Sample test cases :
Input 1 :
40 120
Output 1 :
4800.00
Input 2 :
10 356
Output 2 :
3560.00
Note :
The program will be evaluated only after the “Submit Code” is clicked.
Extra spaces and new line characters in the program output will result in the failure of the test case.
*/
//Ans

#include<iostream>
using namespace std;
#include<iomanip>
class Distance{
  public:
  int speed,times;
  Distance(int p1,int p2){
      speed=p1;
      times=p2;
  }
  friend int calcDistance(Distance s);
};

int calcDistance(Distance s){   //This Distance S can acces the private property of the class.
    return (s.speed * s.times);
}
int main(){
    int p,q;
    cin>>p>>q;
    Distance s12(p,q);
    float sum=calcDistance(s12); //Here in this previous object will come .......Rememeber.......
    cout<<fixed<<setprecision(2)<<sum;
    return 0;
    
}