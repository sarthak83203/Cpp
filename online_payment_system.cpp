#include<iostream>
#include<iomanip>
using namespace std;
class Payment{
    public:
    string type;
    double rs;
    virtual double processpayment(double rs)=0;
};
class CreditCard:public Payment{
    public:
    double processpayment(double rs){
        
            return rs+(rs * 0.02);
           
    }


};
class UPI:public Payment{
    public:
    double  processpayment(double rs){
        
            return rs-(rs * (1.5/100));
        

    }

};
int main(){
    string types;
    double rs;
    cin>>types>>rs;
    CreditCard s1;
    if(types=="CreditCard"){
        double rt=s1.processpayment(rs);
        cout<<"Final amount to be paid using CreditCard: "<<"Rs."<<fixed<<setprecision(2)<<rt<<endl;
    }else if(types=="UPI"){
        UPI s2;
        double ry=s2.processpayment(rs);
        cout<<"Final amount to be paid using UPI: "<<"Rs."<<fixed<<setprecision(2)<<ry<<endl;
    }
    return 0;

}