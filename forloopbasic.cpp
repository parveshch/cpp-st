#include <iostream>
#include <cmath>

using namespace std;

// in this program, we made a simple program to print multiplication table till 10 using for loop

int main (){
    
    int t, z;

    cout << "Type a number of which you want table"<<endl;
    cin >> z;

    cout << endl;

        for(int t = 1; t <= 10; t++){
    cout <<z<<'x'<<t<<'='<<t*(z) << endl;
}


return 0;
}
