#include <iostream>
#include<cmath>
using namespace std;
int main(){
    //here we have made an  array and give it a size such that it can store a specific amount of num
    int luckyNums[6] ={4, 8 , 16, 15, 28, 42};
    //here we have changed the value of array at index position 0
    luckyNums[0]= 29;
    //here we have print th array with index number 0
    cout<<luckyNums[0];
    return 0;

}