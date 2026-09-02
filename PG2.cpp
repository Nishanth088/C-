#include <iostream>
#include <string>
using namespace std;
int main(){
    // string name = "Nishanth";
    // cout << "Name :" << name << endl;
    string name;
    cout << "Enter your name :";
    getline(cin,name);
    // cout << "Length :" << name.length() << endl;
    
    // string full = name + " Prabhu";
    cout << "Name :" << name << endl;
    if  (name == "Nishanth")
        cout << "Name match" << endl;

    return 0;
        }