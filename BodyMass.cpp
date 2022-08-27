#include <iostream>
#include <cmath>

using namespace std;
//Query the user for their weight and height. 
//Weigth = pounds and Heigth = inches 
//Check for errors.
//Display results in Optimal weight (BMI == 18.5 and BMI < 25)
//Underweight (BMI < 18.5)
//Overweigth (BMI > 25)

float weight = 0.0;
float height = 0.0;
float feet = 0.0;
float inches = 0.0;
float bmi = 0.0;

int main() {
//Query the user for their weight and height, and check for errors. 
   cout << "Enter your weight (lbs):\n";
   cin >> weight;
   while (weight < 0) {
     cout << "Ops! Wrong weight. Enter again:\n";
     cin >> weight;
   }
   cout << "Enter your heigth in feet and inches:\n";
   cin >> feet >> inches; 
   height = feet * 12 + inches;

//Calculating BMI
  bmi = (weight *703)/(height * height);
  cout << "Based on your weight of (" << weight << "lbs)" << " and your height of (" << height << "inch) your BMI levels are: " << bmi; 

  if (bmi > 25) 
    cout<<", and you're overweight";
else if(bmi<25 && bmi>18.5)
    cout<<", and your weight is optimal";
else
    cout<<", and you're underweight";
  
  return 0;
}