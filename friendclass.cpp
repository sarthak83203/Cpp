/*
Single File Programming Question
Problem Statement



Seema is building a ticket reservation system and she wants to reserve tickets and cancel for a particular id. She created two classes: Ticket and Reservation. Each Ticket has a private attribute ticketId, and each Reservation has a private attribute reservedTickets (an array of tickets). The Reservation class contains a friend function cancelReservation(Reservation&, const Ticket&) that allows a ticket to be canceled from a reservation. 



Implement the classes and the cancelReservation function and write a program to manage ticket reservations.

Input format :
The first line of input consists of the total number of tickets N to be reserved.

The second line of input consists of N space-separated ticket ids.

The third line of input consists of the ticket id for which the reservation has to be canceled.

Output format :
The first line of output prints the N tickets that are reserved initially.

If the ticket id to be canceled is present:

The second line prints the ticket that has been canceled.
The third line prints the updated list of reserved tickets after canceling the specified ticket.
If the ticket id to be canceled is not present:

The second line of output prints that the ticket id not present in the reservation.
The third line prints the list of reserved tickets.


Refer to the sample outputs for the formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ N ≤ 25

Sample test cases :
Input 1 :
5
101 103 105 108 110
110
Output 1 :
Reserved Tickets: 101 103 105 108 110 
Ticket with ID 110 has been canceled.
Reserved Tickets: 101 103 105 108 
Input 2 :
5
101 103 105 108 110
111
Output 2 :
Reserved Tickets: 101 103 105 108 110 
Ticket with ID 111 not found in the reservation.
Reserved Tickets: 101 103 105 108 110 
*/

#include <iostream>
#include <iomanip>
using namespace std;
class reservation;//forward declaration
class ticket{
    int a;
    friend void calc(ticket a1, reservation b1);
};
class reservation{
    int arr[100];
    friend void calc(ticket a1,reservation b1);
};
void calc(ticket a1,reservation b1){
    cin>>a1.a;
    for (int i=0;i<a1.a;i++){
        cin>>b1.arr[i];
    }
    cout<<"Reserved Tickets: ";
    for (int i=0;i<a1.a;i++){
        cout<<b1.arr[i]<<" ";
    }
    cout<<endl;
    
    int s;
    int count=0;
    cin>>s;
    for (int i=0;i<a1.a;i++){
        if (b1.arr[i]==s){
            count++;
        }
    }
    if (count==0){
        cout<<"Ticket with ID "<<s<<" not found in the reservation."<<endl;
        cout<<"Reserved Tickets: ";
        for (int i=0;i<a1.a;i++){
            cout<<b1.arr[i]<<" ";
        }
    }
    else{
        cout<<"Ticket with ID "<<s<<" has been canceled."<<endl;
        cout<<"Reserved Tickets: ";
        for (int i=0;i<a1.a;i++){
            if (b1.arr[i]!=s){
                cout<<b1.arr[i]<<" ";
            }
        }
    }
}
int main(){
    ticket a1;
    reservation b1;
    calc(a1,b1);
}