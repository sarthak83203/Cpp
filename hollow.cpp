#include<iostream>
using namespace std;
class Hollow{
    public:
    int n;
    Hollow(int size){
        n=size;
    }
    void display(){
       
        for(int i=0;i<=n;i++){
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
            cout<<"*";
            if(i!=0){

            
            for(int j=0;j<2*i-1;j++){
                cout<<" ";
            }
           cout<<"*";
        }
            cout<<endl;
        }
        for(int i=n-1;i>=1;i--){
            for(int j=0;j<n-i-2;j++){
                cout<<" ";
            }
            cout<<"*";
            if(i!=0){
            for(int j=0;j<2*i-1;j++){
                cout<<" ";
            }
           cout<<"*";
        }
            cout<<endl;
        }
    }
    ~Hollow(){
        cout<<"Destructor is called";
    }
};
int main(){
    int p;
    cin>>p;
    Hollow s1(p);
    s1.display();
    return 0;
}