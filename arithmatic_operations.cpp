#include <iostream>
using namespace std;

int main() {

    int p, q;
    char x;
   

    cout << "Program Initializing..." <<endl 

                                      <<endl;

                                  

    cout << "We are going to do sum, product, difference, module operation, increment and decrement of the two numbers, you have been asked" <<endl << endl;                                

    cout << "Press any letter key to start" <<endl;
    cin >> x;  

    cout << "enter your 1st number, i.e. p" <<endl;
    cin >> p;
    cout << "enter your 2nd number, i.e. q" <<endl;
    cin >> q;
    
    
    
    cout << "sum of p and q is: "<< (p+q) <<endl <<endl;
    cout << "product of p and q is: "<< (p*q) <<endl <<endl;
    cout << "difference of p and q is: "<< (p-q) <<endl <<endl;
    cout << "modulo operation of p with q is: "<< (p%q) <<endl <<endl;
    cout << "increment of p: "<< ++p <<endl <<endl;
    cout << "increment of q: "<< ++q <<endl <<endl;
    cout << "decrement of p: "<< --p <<endl <<endl;
    cout << "decrement of q: "<< --q <<endl <<endl;

    cout << "Arithmetic operations done sucessfully!" <<endl <<endl;

    cout << "Press any letter key to end " <<endl;

    cin >> x; 

    cout << endl << "Thank you for using this Program!";



    return 0;
}
