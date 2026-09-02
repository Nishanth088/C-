#include <iostream>
#include <string>
using namespace std;
void logmsg(const string &msg,int level=1){
    const string tag[]={" ", "INFO","WARN","ERROR"};
    cout <<"[" << tag[level]<< "]"<<msg<<endl;
}
double interest (double principal,double years=4,double rate=7.5)
{
    return principal*rate*years/100.0;
}
int main() {
    logmsg("System Started");
    logmsg("Low Memory ",3);
    cout <<"Interest ="<<interest(10000)<<endl;
    cout <<"Interest ="<<interest(10000,2,9.0)<<endl;
    return 0;
}