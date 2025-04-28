//WAP to update the data in list.
#include<iostream>
#include<map>
#include<list>
#include<algorithm>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    list<int>l;
    for(int i=0;i<n;i++){
        cin>>x;
        l.push_back(x);
    }
    auto it=l.begin();
    advance(it,2);
    l.insert(it,156);
    
    //If i want to Delete.
    l.erase(next(l.begin(),2));//remember.

    for(auto i : l){
        cout<<i<<" ";
    }


    return 0;
 

}
