#include<iostream>
using namespace std;
//doing by class
class Reverse{
    public:
    int n;
    int *reversedarr;
    //declaring constructor
   
    Reverse(int arr[],int size){
         n=size;
       reversedarr=new int[n];
       for(int i=0;i<n;i++){
        reversedarr[i]=arr[i];
       }
    }
    void reverse(){
        for(int i=0;i<n/2;i++){
            int first=reversedarr[i];
            int second=reversedarr[n-i-1];
            reversedarr[i]=second;
            reversedarr[n-i-1]=first;
           
        }
        for(int i=0;i<n;i++){
            cout<<" "<<reversedarr[i];
        }
        cout<<endl;
    }
    ~Reverse(){
        cout<<"Destructor is called";
    }

};
int main(){
    int p;
    cin>>p;
    int arr[p];
    for(int i=0;i<p;i++){
        cin>>arr[i];
    }
    Reverse s1(arr,p);
    s1.reverse();
    return 0;

}