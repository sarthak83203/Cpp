/*
Single File Programming Question
Problem Statement



In a bustling city, a team of detectives is working tirelessly to solve a series of mysterious messages left by an enigmatic criminal mastermind. These messages contain a mix of alphabets, numbers, and special characters. The detectives need a tool to analyze the messages and provide insights into the distribution of different characters within them.



Design a program that takes a message as input and performs the following tasks:

a) Calculate the length of the message.

b) Count the number of alphabets (both uppercase and lowercase), numbers, and special characters in the message.

c) Determine the occurrence count of each unique character in the message.



Function specifications

int length (const char* str1) -  To find the length of the string

void count (const char * str1) - To count the total number of alphabets, digits, or special characters

void occur (const char * str1) - To count all occurrences of a character

Input format :
The input consists of a string message.

Output format :
The first line of output displays the length of the message.

The next three lines display the count of alphabets (both uppercase and lowercase), numbers, and special characters.

In the following lines, for each unique character in the message, the output displays the occurrences of all characters,



Refer to the sample output for the formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

The input message consists of printable ASCII characters.

1 ≤ Length of the string ≤ 50

Sample test cases :
Input 1 :
apple?or!orange*1234
Output 1 :
Length: 20
Alphabets: 13
Numbers: 4
Special characters: 3
Occurrence of a is 2
Occurrence of p is 2
Occurrence of l is 1
Occurrence of e is 2
Occurrence of ? is 1
Occurrence of o is 2
Occurrence of r is 2
Occurrence of ! is 1
Occurrence of n is 1
Occurrence of g is 1
Occurrence of * is 1
Occurrence of 1 is 1
Occurrence of 2 is 1
Occurrence of 3 is 1
Occurrence of 4 is 1
Input 2 :
Aa2!
Output 2 :
Length: 4
Alphabets: 2
Numbers: 1
Special characters: 1
Occurrence of A is 1
Occurrence of a is 1
Occurrence of 2 is 1
Occurrence of ! is 1
*/

#include<iostream>
using namespace std;
#include<cstring>
class teams{
    public:
    char name[100];
    int length(const char *str1){
        return strlen(str1);
    }
    void count(const char *str1){
        int count1=0,count2=0,count3=0;
        for(int i=0;str1[i]!='\0';i++){
            if(isalpha(str1[i])){
                count1++;
            }else if(isdigit(str1[i])){
                count2++;
            }else{
                count3++;
        }
    }
    
    cout<<"Alphabets: "<<count1<<endl;
    cout<<"Numbers: "<<count2<<endl;
    cout<<"Special characters: "<<count3<<endl;
    }
    
    void occur(const char *str1){
        int len=strlen(str1);
        char temp[100];
        strcpy(temp,str1);
        for(int i=0;temp[i]!='\0';i++){
            if(temp[i]==' '){
                continue;
            }
            int p=1;
            for(int j=i+1;temp[j]!='\0';j++){
                if(temp[i]==temp[j]){
                    p++;
                    temp[j]=' ';
                }
            }
            cout<<"Occurrence of "<<temp[i]<<" is "<<p<<endl;
            
        }
    }
};
int main(){
    teams s1;
    char name[100];
    cin>>name;
    int pi=s1.length(name);
    cout<<"Length: "<<pi<<endl;
    s1.count(name);
    s1.occur(name);
    return 0;
    
}