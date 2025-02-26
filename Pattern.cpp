#include<iostream>
using namespace std;
class Pattern{
    public:
    int n;
    Pattern(int size){
        n=size;
    }
    void display(){
        for(int i=1;i<n;i++){
            for(int j=1;j<=n;j++){ // If i Write an j<=i then it will show like this  means 1st row one number second row second number etc...
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
    ~Pattern(){
        cout<<"Destructor is Called"<<endl;
    }
};
int main(){
    int p;
    cin>>p;
    Pattern s1(p);
    s1.display();
    return 0;

}