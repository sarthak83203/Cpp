#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,int>m;
    m["tv"]=100;
    m["laptop"]=200;
    m["volet"]=450;
    m.insert({"mobile",58});
    for(auto p :m){
        cout<<p.first<<" ";//This means that first is Key.
        cout<<p.second<<" ";//this means that seond is value.

    }
    return 0;

}