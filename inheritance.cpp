#include<iostream>
using namespace std;
class Employyes{
    public:
    int id;
    float salary;
    Employyes(int p,int q){
        id=p;
        salary=q;
    }
   
    void Spaces(){
        cout<<"The id is "<<id<<endl;
        cout<<"The salary is "<<salary<<endl;
    }
    Employyes(){}
};
class Programmer:public Employyes{
    public:
    Programmer(int inpId){
        id=inpId;
    } 
};
int main(){
    Employyes s1(2,3000); //Object of first must be used. 
    s1.Spaces();
    Programmer s2(10);
    cout<<s2.id;
    return 0;
}