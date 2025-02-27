#include<iostream>
using namespace std;
class Matrix{
    public:
    int n;
    Matrix(int size){
        n=size;
    }
    void display(){
       
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                cout<<" ";
            }
            for(int j=0;j<n-i;j++){
                cout<<i+1;
            }
            
            cout<<endl;
        }
    }
    ~Matrix(){
        cout<<"Destructor is called";
    }
};
int main(){
    int p;
    cin>>p;
    Matrix s1(p);
    s1.display();
    return 0;
}