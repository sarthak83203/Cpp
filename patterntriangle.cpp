#include<iostream>
using namespace std;
class Triangle{
    public:
    int n;
    Triangle(int size){
        n=size;
    }
    void display(){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
    ~Triangle(){
        cout<<"Destructor is called";
    }

};
int main(){
    int p;
    cin>>p;
    Triangle t(p);
    t.display();
    return 0;

}