#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double calculateBMI(double heightInInches, double weightInPounds) {
    double bmi = (weightInPounds * 703) / pow(heightInInches, 2);
    return bmi;
}

string getBMICategory(double bmi) {
    if (bmi < 18.5) {
        return "Underweight";
    }
    else if (bmi < 24.9) {
        return "Normal";
    }
    else if (bmi < 29.9) {
        return "Overweight";
    }
    else {
        return "Obese";
    }
}

void printBMIResults(double bmi, string bmiCategory) {
    cout << "Your BMI is " << bmi << endl;
    cout << "You are considered " << bmiCategory << endl;
}

void testBMI(double heightInFeet, double heightInInches, double weightInPounds) {
    double height = (heightInFeet * 12) + heightInInches;
    double bmi = calculateBMI(height, weightInPounds);
    string bmiCategory = getBMICategory(bmi);
    printBMIResults(bmi, bmiCategory);
}

int main() {
    testBMI(5, 9, 150); // should print "Your BMI is 22.1" and "You are considered Normal"
    testBMI(6, 2, 200); // should print "Your BMI is 25.7" and "You are considered Overweight"
    testBMI(5, 0, 90); // should print "Your BMI is 17.5" and "You are considered Underweight"
    testBMI(6, 0, 339); // should print "Your BMI is 45.9" and "You are considered Obese"
    return 0;
}
