#include <iostream>
#include <string>
using namespace std;
int main(){
    int age;
    cout << "Enter your Age :";
    cin >> age;
    if (age <18)
        cout << "Not Eligible to Vote"<< endl;
    else if(age > 18 && age<65)
        cout << "Eligible to Vote and Work" << endl;
    else
        cout << "Senior citizen"<< endl;

    return 0;
    }