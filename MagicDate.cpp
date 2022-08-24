#include <iostream>
using namespace std;

int month;
int day;
int year;
int magicDate = 0;

int main() {
  // Ask user for a valid month and check validity:
  cout << "Enter the month (1 to 12):\n";
  cin >> month;
  while (month < 1 || month > 12) {
    cout << "Invalid month, try again!\n";
    cin >> month;
  }
  // Ask user for valid day and check validity:
  cout << "Enter the day (1 to 31):\n";
  cin >> day;
  while (day < 1 || day > 31) {
    cout << "Invalid day, try again!\n";
    cin >> day;
  }
  // Ask user for valid year and check validity:
  cout << "Enter the year (00 to 99):\n";
  cin >> year;
  while (year < 0 || year > 99) {
    cout << "Invalid year, try again!\n";
    cin >> year;
  }
  // Calculate month x day:
  magicDate = month * day;

  //Finding magic date:
  if (magicDate == year) {
    cout << "You've got yourself a magic date!";
    }
  else {
    cout << "Sorry! No magic date for you... ";
  }
  return 0;
} 
