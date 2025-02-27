#include<iostream>
using namespace std;
class Matrix{
    public:
    int n;
    Matrix(int size){
        n=size;
    }
    void display(){
        int num=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cout<<num<<" ";
                num++;
  
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