#include <iostream>
using namespace std;
int main(){
    //a two dimensional array
    //[]the first has rows and  secnd [ ]is a coloumn
    int numGrid[3][2]={
                      {1,2},
                      {3,4},
                      {5,6} 

                    };
    // cout<<numGrid[2][1];
    //0 is a first row and 1 is an index number of first row              
    //here 3 is the number of rows  
    for (int i = 0; i < 3; i++)
    {
        //this represents the elements
        for (int j = 0; j < 2; j++)
        {
           cout<<numGrid[i][j];
        }
        cout<<endl;
    }
    
    return 0;
}