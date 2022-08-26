#include <iostream>
#include <cmath>

using namespace std;

int area1, area2;
int result;
double length1 = 0;
double length2 = 0;
double width1 = 0;
double width2 = 0;

int main() {
//Query the user for rectangle dimensions:
  cout << "This program calculates the are of two rectangles, and compare which rectangle has the greater area, or if the areas are the same.\n\n";

//First rectangle:
  cout << "Enter first rectangle's length:\n";
  cin >> length1;
//Check for errors:
    while (length1 < 0) {
    cout << "Ops! Wrong input. Enter first rectangle's lenght again:\n";
    cin >> length1;
  }
  cout << "Enter first rectangle's width:\n";
  cin >> width1;
     while (width1 < 0) {
       cout << "Ops! Wrong input. Enter first rectangle's lenght again:\n"; 
       cin >> width1;
     }
  
//Second rectangle:
  cout << "Enter second rectangle's length:\n";
  cin >> length2;
    while (length2 < 0) {
    cout << "Ops! Wrong input. Enter second rectangle's width again:\n";
    cin >> length2;
  }
  cout << "Enter second rectangles's width:\n";
  cin >> width2;
      while (width2 < 0) {
    cout << "Ops! Wrong input. Enter second rectangle's width again:\n";
    cin >> width2;
  }

//Calculating rectangles:
area1 = length1 * width1;
  cout << "\nThe area of the first rectangle is: " << area1;
area2 = length2 * width2; 
  cout << ", and the area of the second rectangle is: \n" << area2 << ".";
  
//Comparing rectangles: 
  if (area1 < area2) {
  string result = (area1 < area2) ? "smaller" : "larger";
  cout << "\n The first number (" << area1 << ")" << " is " << result << " than the second number.\n (" << area2 << ")"; 
    }
  else if (area1 == area2) {
    cout << "\n The first area entered: (" << area1 << ")" << " is the same as second area entered: (" << area2 << ")";
  }
  
return 0;
}