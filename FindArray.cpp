#include <iostream>
using namespace std;

bool searchArray (int a[], int n, int number);

int main() {
  int a[] = {90, 80, 65, 100, 40};
  int number;
  
  cout << "Enter a number:" << endl;
  cin >> number;

  if (searchArray (a, 5, number))
    cout << number << "\nFound" << endl;
  else
    cout << "\n" << number << "\nNot found!" << endl;
}

bool searchArray (int a[], int n, int number) {
  for (int i = 0; i < n; i++) {
    if (a[i] == number) 
      return true;
  }
  return false; 
}