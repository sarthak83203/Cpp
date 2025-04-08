/*
Single File Programming Question
Problem Statement



Implement a Matrix class that represents a two-dimensional matrix of integers. Overload the unary - operator to negate all elements of the matrix and return a new matrix with the negated values. 



Create a class called Matrix and Matrix operator-() overloads the unary - operator to negate all elements of the matrix. It returns a new Matrix object with the negated values.

Input format :
The first line contains two integers, rows and cols, representing the dimensions of the matrix.

The next row lines contain cols integers each, representing the elements of the matrix.

Output format :
The original matrix, printed row by row with elements separated by spaces.

The negated matrix is printed row by row with elements separated by spaces.

Sample test cases :
Input 1 :
2 2
1 2
3 4
Output 1 :
Original Matrix:
1 2 
3 4 
Negated Matrix:
-1 -2 
-3 -4 
Input 2 :
3 3
0 0 0
0 0 0
0 0 0
Output 2 :
Original Matrix:
0 0 0 
0 0 0 
0 0 0 
Negated Matrix:
0 0 0 
0 0 0 
0 0 0 
Input 3 :
1 1
5
Output 3 :
Original Matrix:
5 
Negated Matrix:
-5 
Input 4 :
2 5
0 -1 2 -3 4
5 -6 -7 8 9
Output 4 :
Original Matrix:
0 -1 2 -3 4 
5 -6 -7 8 9 
Negated Matrix:
0 1 -2 3 -4 
-5 6 7 -8 -9 

*/
#include<iostream>
using namespace std;
class Matrix{
    public:
    int mat[100][100];
    int rows,cols;
    Matrix (int r,int c){
        rows=r;
        cols=c;
    }
    void get(){
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                cin>>mat[i][j];
            }
        }
    }
    void display1(){
        cout<<"Original Matrix:"<<endl;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
        
    }
   Matrix operator-(){
       Matrix temp(rows,cols);
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                temp.mat[i][j]=-mat[i][j];
                
            }
        }
        return temp;
        
    }
    void display(){
        cout<<"Negated Matrix:"<<endl;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                cout<<mat[i][j]<<" ";
                
            }
            cout<<endl;
        }
    }
    
};
int main(){
    int rows,cols;
    cin>>rows>>cols;
    Matrix t(rows,cols);
    t.get();
    t.display1();
    t=-t;
    t.display();
    return 0;
    
}