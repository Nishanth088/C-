#include <iostream>
#include <string>
#include<cctype> 
using namespace std;
int main(){
    string s="udupi";
    cout << "First 4 :" << s.substr(0,4)<<endl;
    cout << "from 4 :" << s.substr(4)<<endl;
    
    int c=s.compare("nitte");
    cout << "Verification vs 'verify' :" << (c<0?  "<" : c>0? ">" : "=")<<endl;

    int freq[26]={0};
    for (char ch :s)
        if (isalpha((unsigned char)ch)) freq[tolower(ch)-'a']++;
        cout << "Lettter counts :";
    for (int i=0;i<26;++i)
        // if (freq[i])
        cout <<char('a'+i)<<":"<<freq[i]<<" ";
    cout <<endl;
    return 0;

}