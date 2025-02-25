//Target is to Swap the pair of number in pairs for example [1,2,3,4,5] the our output is [2,1,4,3,5].Using C++ and constructor.
#include<iostream>
using namespace std;
class leetcode{
    public:
    leetcode(int arr[],int size){
        for(int i=0;i<size-1;i+=2){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    leetcode s1(arr,n);
    return 0;

}
