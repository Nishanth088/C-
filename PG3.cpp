#include <iostream>
using namespace std;
void myswap(int &a, int &b){
    int temp = a;
    a=b;
    b=temp;
}
 int main(){
    int x=10,y=20;
    cout << "Before : X= " << x << " Y = " << y << endl;
    myswap(x,y);
    cout  << "After swapping : X= " << x << "  Y= " << y << endl;
    return 0;

 }