#include<iostream>
using namespace std;
class UPSC{
    public:
    void Printout(const string& slot1,const string& slot2,const string& slot3,const string& preferredSlot){
        
        
        if(preferredSlot==slot1){
            cout<<slot1<<" Preferred"<<endl;
            cout<<slot2<<endl;
            cout<<slot3<<endl;
        }   
        else if(preferredSlot==slot2){
            cout<<slot1<<endl;
            cout<<slot2<<" Preferred"<<endl;
            cout<<slot3<<endl;
        }  else if(preferredSlot==slot3){
            cout<<slot1<<endl;
            cout<<slot2<<endl;
            cout<<slot3<<" Preferred"<<endl;
        }  else if(preferredSlot=="none"){
            cout<<slot1<<endl;
            cout<<slot2<<endl;
            cout<<slot3<<endl;
        }        
    }
   

};
int main(){
    string s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    UPSC sp;
    sp.Printout(s1,s2,s3,s4);
    
    return 0;
}