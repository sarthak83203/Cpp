#include<iostream>
using namespace std;
class Pyramid{
    public:
    int n;
    Pyramid(int size){
        n=size; // afetr this it directly pass to display without any parameter so its easy to use the constructor.
    }
    void display(){
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i;j++){
                cout<<" ";
            }
            for(int j=1;j<=i;j++){
                cout<<j;
            }
            for(int j=i+1;j>=1;j--){
                cout<<j;
            }
            cout<<endl;
        }
    }
    ~Pyramid(){
        cout<<"Destructor is called";
    }
};
int main(){
    int p;
    cin>>p;
    Pyramid s1(p);
    s1.display();
    return 0;


}