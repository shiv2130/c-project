#include <iostream>
using namespace std;

//void fucntion doesn't return anything
//here we have created a cube function
double cube(double num){
     return num*num*num;
};

int main(){
   //here we have return the function 
   cout<< cube(5.0);
    return 0;
}