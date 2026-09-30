#include <iostream>
using namespace std;
class tracer{
    int id;
    public :
    tracer(int i) : id(i) {
        cout << "Cionstruct #" << id << endl;}
        ~tracer() {
            cout << " Destruct #" << id<< endl;}
        };
        int main(){
            cout << "Enter Block\n";
            {
                tracer a(1),b(2);
                cout << "...Working...\n";}
                cout << "Left Block\n";
                return 0;
            }
        