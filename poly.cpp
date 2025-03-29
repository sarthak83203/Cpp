#include<iostream>
#include<iomanip>
using namespace std;
class UnitConverter{
    public:
    
    
    double convert(double millimetres){
            return (0.1 * millimetres);
        
    }
    double convert(int unitType,double value){
        return (0.000001 * value);
        
    }
   
};
int main(){
    double value;
    int type;
    cin>>type>>value;
    UnitConverter s1;
    if(type==1 || type==2){
        
        if(type==1){
            cout<<fixed<<setprecision(2)<<s1.convert(value)<<" cm"<<endl;
        }else if(type==2){
            cout<<fixed<<setprecision(2)<<s1.convert(type,value)<<" km"<<endl;
        }
    }else{
            cout<<"Invalid unit type!"<<endl;
        }
    return 0;
}
