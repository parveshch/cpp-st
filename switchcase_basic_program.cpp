#include <iostream>
using namespace std;

int main(){

    int standard;
    cout <<"Program Initializing..."<<endl <<endl;

    cout << "In which standard do you study?" <<endl;
    cin >> standard;

    if( standard <1 || standard >12)
    cout << "kindly check your input value and try again.";

    else {
    
    switch (standard)
    {
    case 10:
        cout << endl << "You have a secondary board class, But no need to worry much about exams, Play with your friends.";
      
        break;

        
    case 12:
         cout << endl << "You have a senior secondary board class, Study 2-3 hours a day, and then chill.";
    
        break;


    default:

        cout << endl << "Guys study a bit and just chill in life, no need to worry about exams.";
        break;
    }

    }

    cout <<endl << endl << "Thank you, Have a good day!";

    return 0;
}

