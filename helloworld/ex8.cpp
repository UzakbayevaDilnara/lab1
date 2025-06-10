#include <iostream>
using namespace std;

int main(){
    double weight, height;
    cin >> weight >> height;
    
    double bmi = weight / (height * height);

    cout << "Your BMI is " << bmi;
    return 0;
}

