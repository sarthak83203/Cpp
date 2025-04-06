/*
Single File Programming Question
Problem Statement



Sharon wants to design a program to analyze experimental results. 



Create a base class, Experiment, with a pure virtual function analyzeResults(). Implement two derived classes, ChemistryExperiment and PhysicsExperiment, to analyze chemistry and physics experiments, respectively. 



For the chemistry experiment, calculate the value: Product = Reactant A * Reactant B

For the physics experiment, calculate the value: Final Velocity = Initial Velocity + (Acceleration * Time)

Input format :
The first line of input consists of a character ('C/c' for Chemistry Experiment, 'P/p' for Physics Experiment).

If Chemistry Experiment is selected, the second line consists of two double-value numbers: reactant A and reactant B.

If Physics Experiment is selected, the second line consists of three double-value numbers: initial velocity, acceleration, and time.

Output format :
For Chemistry Experiment, the output displays a double-value number, rounded off to two decimal places, representing the product of reactant A and reactant B.

For Physics Experiment, the output displays a double-value number, rounded off to two decimal places, representing the final velocity followed by " m/s".



Refer to the sample output for formatting specifications.

Code constraints :
0.01 ≤ input values ≤ 100.00

Sample test cases :
Input 1 :
c
9.0 0.078
Output 1 :
0.70
Input 2 :
C
10.5 10.2
Output 2 :
107.10
Input 3 :
p
1.23 2.45 6.78
Output 3 :
17.84 m/s
Input 4 :
P
20.5 4.7 6.5
Output 4 :
51.05 m/s
*/
#include<iostream>
#include<iomanip>
using namespace std;
class Experiment{
    public:
    double a,b;
    virtual double analyzeResults(double a,double b,double c=0)=0;
};
class ChemistryExperiment:public Experiment{
    public:
    double analyzeResults(double a,double b,double c=0){
        return (a * b);
    }
    
};
class PhysicsExperiment:public Experiment{
    public:
    double analyzeResults(double a,double b,double c){
        return (a + (b * c));
    } 
    
    
};
int main(){
    string type;
    double a,b,w,r,t,pi;
    cin>>type;
    if(type=="C" || type=="c"){
        cin>>a>>b;
        ChemistryExperiment s1;
        pi=s1.analyzeResults(a,b);
         cout<<fixed<<setprecision(2)<<pi<<endl;
    }else if(type=="P" || type=="p"){
        cin>>w>>r>>t;
        PhysicsExperiment s2;
        pi=s2.analyzeResults(w,r,t);
         cout<<fixed<<setprecision(2)<<pi<<" m/s"<<endl;
    }
   
    return 0;
}
