//Add two Members of two diffrent classes.
#include<iostream>
using namespace std;
class add2;
class Add1{
    int a;
    public:
    Add1(int p){
        a=p;  
    }
    friend void display(Add1 q,add2 w);
};
class add2{
    int b;
    public:
    add2(int q){
        b=q;
    }
   friend  void display(Add1 q,add2 w);

};
void display(Add1 q,add2 w){
    cout<<q.a+w.b;
}
int main(){
    int rt;
    int wr;
    cin>>rt>>wr;
    Add1 s1(rt);
    add2 s2(wr);
    display(s1,s2);
    

}