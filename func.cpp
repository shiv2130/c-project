#include <iostream>
using namespace std;
//created a function
void sayHi(string name , int age){
    cout<<"Hello "<<name<<" your age is "<<age<<endl;
};


int main(){
    //call the function with some params
    sayHi("Shivanshu", 16);
    sayHi("Shivam", 17 );
    sayHi("Mahi", 16);
    return 0;
}