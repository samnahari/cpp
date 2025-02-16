#include <iostream>
# include <cmath>
using namespace std;
int main () {
    //the variables
    string  op;
    double num1,num2;  
    // get the user input
    cout<<"Enter The Operation (+,-,*,/,^) ";
    cin>>op;
    cout<<"Enter The First Number ";
    cin>>num1;
    cout<<"Enter The secend Number ";
    cin>>num2;
    //if else
    if (op =="+") {
        cout<<  num1+num2;
    }
     else if (op =="-"){
        cout<<  num1-num2;
    }
     else if (op=="/") {
        if (num2==0)
        cout<<"you cant put 0 in it if you do its ";
    
        cout<<  num1/num2;
    }
    else if (op =="*"){
        cout<<  num1*num2;
    }
    else {
        cout<<"The Operation is not (+,-,*,/)";
}

}