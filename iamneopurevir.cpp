/*
Single File Programming Question
Problem Statement:

Create a base class named operationsBase with the following four virtual functions

void addition()

void subtraction()

void multiplication()

void division()

Create a derived class named operationsDerived that extends operationsBase with a and b as its private attributes and override the virtual functions.

Input format :
The input consists of two integers.

Output format :
The output prints the results of addition, subtraction, multiplication, and division separated by a space.

Sample test cases :
Input 1 :
20 10
Output 1 :
30 10 200 2 
Input 2 :
5248 284
Output 2 :
5532 4964 1490432 18 
*/
#include<iostream>
#include<iomanip>
using namespace std;
class operationBase{
    public:
    int a,b;
    virtual int addition(int a,int b)=0;
    virtual int subtraction(int a,int b)=0;
    virtual int multiplication(int a,int b)=0;
    virtual int division(int a,int b)=0;
};
class operationDerived:public operationBase{
    public:
    int addition(int a,int b){
        return a+b;
        
    }
    int subtraction(int a,int b){
        return (a - b);
    }
    int multiplication(int a,int b){
        return (a * b);
    }
    int division(int a,int b){
        return (a/b);
    }
   
};
int main(){
    int a,b;
    cin>>a>>b;
    operationDerived s1;
    cout<<s1.addition(a,b)<<" "<<s1.subtraction(a,b)<<" "<<s1.multiplication(a,b)<<" "<<s1.division(a,b)<<endl;
    return 0;
}