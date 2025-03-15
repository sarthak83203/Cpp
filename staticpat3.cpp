//I am Given with charcter array i want to count the number of occurance it is coming.
#include<iostream>
using namespace std;
class Shop{
    public:
    static int count;
    static void display();

};
int Shop::count=1;
void Shop::display(){
    int n;
    cin>>n;
    char name[n];
    cin>>name;
    for(int i=0;name[i]!='\0';i++){
        if(name[i]==' '){
            continue;
        }
        for(int j=i+1;name[j]!='\0';j++){
            if(name[i]==name[j]){
                count++;
                name[j]=' '; //Mark as counted.
            }
        }
        cout<<"Total count of "<<name[i]<<" is "<<count<<endl;     
    }
}
int main(){
    Shop::display();
    return 0;
}