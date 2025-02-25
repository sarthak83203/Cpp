#include<iostream>
using namespace std;
class array{
    public:
    array(int arr[],int size){
        for(int i=0;i<size;i++){
            cout<<" "<<arr[i];

        }
        cout<<endl;

    }
};
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    array s1(arr,n);
    
    return 0;

   


}