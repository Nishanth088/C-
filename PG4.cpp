#include <iostream>
#include <string>
using namespace std;
int main(){
    int marks;
    cout << "Enter Marks(0-100) : ";
    cin >> marks;

    if(marks >=90)
        cout << "Grade O" << endl;
    else if(marks >=80)
        cout << "Grade A" << endl;
    else if(marks >=70)
        cout << "Grade B" << endl;
    else if(marks >=40)
        cout << "Grade C" << endl;
    else
        cout << "Grade F" << endl;
    bool passed= (marks>=40);
    if (passed)
        cout << "Result : Pass" << endl;
    else
        cout << "Result : Fail" << endl;
    
    return 0;
}