#include <iostream>
using namespace std;
int num1 = 0; 

int main() {

  //Query the user for a number from 1 - 10:
  cout << "This program converts numbers into Roman numerals.\n \n Enter a number from 1 to 10:\n";
  cin >> num1;
  //Check for validity:
  while (num1 < 1 || num1 > 10) {
    cout << "Ops! Wrong number. Enter number from 1 to 10:\n";
    cin >> num1; 
    }

  //Determining input number in Roman Numerals:
  switch (num1) {
    case 1:
       cout << "Your roman numeral is:\n I\n";
       break;
    case 2:
       cout << "Your roman numeral is:\n II \n";
       break;
    case 3:
       cout << "Your roman numeral is:\n III \n";
       break;
    case 4:
       cout << "Your roman numeral is:\n IV \n";
       break;
    case 5:
       cout << "Your roman numeral is:\n V \n";
       break;
    case 6:
       cout << "Your roman numeral is:\n VI\n";  
       break;
    case 7: 
       cout << "Your roman numeral is:\n VII\n";
       break;
    case 8:
       cout << "Your roman numeral is:\n VIII\n"; 
       break;
    case 9:
       cout << "Your roman numeral is:\n IX \n";
       break;
    case 10:
       cout << "Your roman numeral is:\n X \n";   
       break;
  }    
  
  return 0;
}