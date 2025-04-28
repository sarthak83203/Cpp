#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<string>vec;
    vec.push_back("Sarthak");
    vec.push_back("Naman");
    vec.push_back("Book");
    vec.erase(vec.begin()+1);
    
    sort(vec.begin(),vec.end()-1);
    for(auto p:vec){
        cout<<p<<" ";
    }
    
    return 0;
}