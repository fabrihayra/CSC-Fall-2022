#include <iostream>
#include <string>
using namespace std;

void displaymenu() {
cout << "This program is a currency converter from US dollars to the options bellow:\n";
cout <<" 1.Brazilian Real\n";
cout <<" 2.British Pounds\n";
cout <<" 3.Mexican Pesos\n";
cout <<" 4.Japanese Yen\n";
}

  double  brazillian() {
  double amount1, real;
  cout << "You have selected US to Brazilian Real. Please enter the amount in dollars:\n";
  cin >> amount1;
real  = amount1 * 5.21;
 return real; 
}
  double british() {
  double amount2, pounds;
  cout << "You have selected US to British Pounds. Please enter the amount in dollars:\n";
  cin >> amount2;
pounds = amount2 * 0.87;
  return pounds;
}
   double mexican() {
   double amount3, pesos;
   cout << "You have selected US to Mexican Pesos. Please enter the amount in dollars:\n";
   cin >> amount3;
pesos = amount3 * 20.24;
   return pesos;
}
   double japanese() {
   double amount4, yen;
   cout << "You have selected US to Japanese Yen. Please enter the amount in dollars:\n";
   cin >> amount4;
yen = amount4 * 139.89; 
   return yen;
}

int main() { 
string st[20];
int itemcount = 0;
 
displaymenu(); 
int yourchoice;
string confirm;

 double real; 
 double pounds; 
 double pesos;
 double yen;
  
do {
  cout<< "Enter your choice (1-5):\n";
  cin>> yourchoice;
  
switch (yourchoice) {
case 1: 
  real = brazillian(); 
  cout << "\n Your amount is Brazillian Real is = \n" << real;
  break;
case 2: 
  pounds = british();
  cout << "\n Your amount in British Pounds is = \n" << pounds; 
  break;
case 3:
  pesos = mexican();
  cout << "\n Your amount in Mexican Pesos is =  \n" << pesos;
  break;
case 4: 
  yen = japanese(); 
  cout << "\n Your amount in Japanese Yen is = \n" << yen;
  break;
  
default: 
  cout<< "Oops! Invalid input. Try again!\n"; 
  break;
}
   cout<< "\nPress y or Y to continue:\n";
   cin>> confirm;
} while (confirm == "y" || confirm == "Y");
  
return 0;
}