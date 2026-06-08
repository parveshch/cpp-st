#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int x, y, z, t;

    x = 241, y = 7, z = 5911, t = 60;

    //trying setw manipulator 

    cout << "the value of x is:"<< setw(2) << x << endl;
    cout << "the value of y is:"<< setw(2) << y << endl;
    cout << "the value of z is:"<< setw(2) << z << endl;
    cout << "the value of t is:"<< setw(2) << t << endl;


    return 0;



}
