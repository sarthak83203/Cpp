#include<iostream>
using namespace std;
int fiboLastDigit(int a,int &b){
    
    int y=1;
    int c;
    if(a==1){
        return 0;
    }else if(a==2){
        return 1;
    }
    for(int i=3;i<=a;i++){
        c=(b+y)%10;
        b=y;
        y=c;
        
    }
    return c;
    
}
int main(){
    int p;
    cin>>p;
    int r=0;
    int pi=fiboLastDigit(p,r);
    cout<<pi;
    return 0;
    
    
    
}