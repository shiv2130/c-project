#include <iostream>
#include<cmath>
using namespace std;
int main(){
    //here we have declare three variables
    string color, pluralNoun, celebrity;
    //here we take input from user
    cout<<"Enter a color ";
    getline(cin, color);
    cout<<"Enter a plural noun ";
    getline(cin, pluralNoun);
    cout<<"Enter a celebrity ";
    getline(cin, celebrity);
    //here we show the output
    cout<<"Roses are "<<color<<endl;
    cout<<pluralNoun<<" are blue"<<endl;
    cout<<"I love "<<celebrity<<endl;
    return 0;

}