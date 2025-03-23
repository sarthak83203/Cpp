#include<iostream>
using namespace std;
#include<vector>
class Solution {
    public:
        int n;
         Solution() {} 
        Solution(int size1){
            n=size1;
        }
        void merged(){
            vector<int> arr1(n); //This is the type of vector
            vector<int> arr2(n);
            for(int i=0;i<n;i++){
                cin>>arr1[i];
            }
            for(int i=0;i<n;i++){
                cin>>arr2[i];
            }
            for(int i=0;i<n-1;i++){
                for(int j=0;j<n-i-1;j++){
                    if(arr1[j]>arr1[j+1]){
                        int temp=arr1[j];
                        arr1[j]=arr1[j+1];
                        arr1[j+1]=temp;
                    }
                }
            }
            for(int i=0;i<n-1;i++){
                for(int j=0;j<n-i-1;j++){
                    if(arr2[j]>arr2[j+1]){
                        int temp=arr2[j];
                        arr2[j]=arr2[j+1];
                        arr2[j+1]=temp;
                    }
                }
            }
            vector<int> merged(2 * n);
            for(int i=0;i<n;i++){
                merged[i]=arr1[i];
            }
            for(int i=0;i<n;i++){
                merged[n+i]=arr2[i];
            }
            for(int i=0;i<n+n;i++){
                cout<<" "<<merged[i];
            }
        }
    };
    int main(){
        int n;
        cin>>n;
        Solution s1(n);
        s1.merged();
        return 0;
    }