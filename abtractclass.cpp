#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class Account
{
public:
	virtual void display() = 0;
	virtual void deposit(double amount) = 0;
	virtual void withdrawl(double amount) = 0;
};
class savingsAccount:public Account{
    private:
    int acno;
    double balance;
    string name;
    
  public:
  void input1(){
    cin>>acno>>name>>balance;
  }
  void display(){
      cout<<acno<<" "<<name<<" "<<balance;
  }
  void deposit(double amount){
      balance=balance+amount;
      cout<<balance<<endl;
  }
  void withdrawl(double amount){
    if (amount > balance) {
        cout << "Insufficient balance!" << endl;
    } else {
        balance -= amount;
        cout << "Balance after withdrawal:" << fixed << setprecision(2) << balance << endl;
    }
  }
  
};
class currentAccount:public Account{
  private:
  int acno,draftlimit;
  double balance;
  string name;
  double draftlimt;
  string city;
  public:
  void input2(){
    cin>>acno>>name>>balance;
  }
  void display(){
      cout<<acno<<" "<<name<<" "<<balance<<" "<<draftlimit<<" "<<city<<endl;
  }
  void deposit(double amount){
      balance=balance+amount;
      cout<<balance<<endl;
      
  }
  void withdrawl(double amount){
    if (amount > balance) {
        cout << "Insufficient balance!" << endl;
    } else {
        balance -= amount;
        cout << "Balance after withdrawal:" << fixed << setprecision(2) << balance << endl;
    }
  }
};
int main(){
    int choice1,choice2,amount;
    cin>>choice1;
    if(choice1==1){
        savingsAccount s1;
        s1.input1();
        s1.display();
        cin>>choice2;
        cin>>amount;
        if(choice2==1){
            s1.deposit(amount);
            
            
        }else if(choice2==2){
            s1.withdrawl(amount);
        }
    }else if(choice1==2){
        currentAccount s2;
        s2.input2();
        s2.display();
        cin>>choice2;
        cin>>amount;
        if(choice2==1){
            s2.deposit(amount);
        }else if(choice2==2){
            s2.withdrawl(amount);
        }
    }
    return 0;
}
    
    
