#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main(){
    int n;
    cin>>n;
    list<int>l;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        l.push_back(p);
    }
    for(int val:l){
        cout<<val<<" ";
    }
    cout<<endl;
}