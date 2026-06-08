#include <iostream>
using namespace std;

int main (){
    float BMI;
    cout << "Program Initializing... We are gonna classify your weight status." << endl << endl;
    cout << "Enter your BMI" << endl;
    cin >> BMI;

    if(BMI<18.5){
    cout << "You are Underweight, Kindly have a proper diet!" <<endl;}

    else if(BMI>=18.5 && BMI<=24.9){
    cout << "You have a Normal weight, No need to worry much! " << endl;}

    else if (BMI >24.9 && BMI <=29.9) {
    cout << " You are overweight, No need to worry much, just do exercise daily" <<endl;
    }
    
    else if (BMI > 29.9 && BMI <=34.9) {
    cout << "You are obese Class - I, kindly have a diet plan and avoid junk food" <<endl;

    }
    else if (BMI > 34.9 && BMI <=39.9) {
    cout << "You are obese Class - II, kindly consult a doctor!!!" <<endl;

    }
    else if (BMI >= 40) {
    cout << "You are obese Class - III, kindly consult a doctor!!!" <<endl;

    }

    
    return 0;
}
