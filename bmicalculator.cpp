#include <iostream>
#include <cmath>
using namespace std;

int main (){

    float Height, Weight, BMI;

    cout << "Program Initializing..."<<endl <<endl;

    cout << "We are gonna calculate BMI"<<endl <<endl;


    cout << "Enter your Weight in kg" <<endl;
    cin >> Weight;

    cout << "Enter your Height in m" << endl;
    cin >> Height;

    BMI = (Weight/(pow (Height, 2)));

    cout <<endl<< "Your BMI is: " << BMI << endl;



    if(BMI <18.5 && BMI >=10){
    cout << "You are Underweight, Kindly have a proper diet."<<endl <<endl;

    }
     else if(BMI < 10){
        cout << BMI << " BMI is beyond limits, Kindly check your input values." << endl <<endl;
    
    }
    else if(BMI >=18.5 && BMI <24.9){
    cout << "You have a normal bodyweight."<<endl <<endl;
    
    }
    else if (BMI >24.9 && BMI <=29.9) {
    cout << "You are overweight, No need to worry much, Just do exercise daily " <<endl <<endl;
    
    }
    else if (BMI > 29.9 && BMI <=34.9) {
    cout << "You are obese Class - I, Cut out all the Junk food and run 10km daily" <<endl <<endl;

    }
    else if (BMI > 34.9 && BMI <=39.9) {
    cout << "You are obese Class - II, Kindly consult a doctor!!!" <<endl <<endl;

    }
    else if (BMI >= 40 && BMI <50) {
    cout << "You are obese Class - III, Kindly consult a doctor!!!" <<endl <<endl;

    }

    else if (BMI >= 50 && BMI <59.9) {
    cout << "You have Class - IV Obesity, Kindly consult a doctor immediately!!!" <<endl <<endl;

    }
    else if (BMI >= 59.9 && BMI <69.9) {
    cout << "You have Class - V Obesity, Kindly consult a doctor immediately!!!" <<endl <<endl;

    }
    else if (BMI >= 69.9 && BMI <79.9) {
    cout << "You have Class - VI Obesity, Kindly consult a doctor immediately!!!" <<endl <<endl;

    }
    else if (BMI >= 79.9 && BMI <=100) {
    cout << "You have EXTREME Obesity, Kindly consult a doctor immediately!!!" <<endl <<endl;

    }

    else {
    cout << BMI << " BMI is Beyond limits, kindly check your input values."<<endl <<endl;
    
    }
    

    cout << "Thank you for using this Program!";

    return 0;
}

