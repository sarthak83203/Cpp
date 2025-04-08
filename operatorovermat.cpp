#include<iostream>
using namespace std;
class matrix{
    public:
    int r,c;
    int arr[100][100];
    int arr1[100][100];
    int C[100][100];
    matrix(int rows,int cols){
        r=rows;
        c=cols;
    }
    void get(){
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin>>arr[i][j];
            }

        }
    }
    void get2(){
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin>>arr1[i][j];
            }
        }
    }
    void display(){
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                C[i][j]=0;
                for(int k=0;k<c;k++){
                    C[i][j]+=arr[i][k] * arr1[k][j];
                }

            }
        }
        cout<<"Real Matrix is as follow:"<<endl;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cout<<C[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    int rows,cols;
    cin>>rows>>cols;
    matrix s1(rows,cols);
    s1.get();
    s1.get2();
    s1.display();
    return 0;
}