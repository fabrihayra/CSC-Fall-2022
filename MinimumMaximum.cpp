#include <iostream>
using namespace std;
int num1, num2;

int main() {
//Query the user for two numbers:
  cout << "Enter first number:\n";
  cin >> num1;
  cout << "Enter second number:\n";
  cin >> num2;
  if (num1 == num2) {
    cout << "Ops! Enter two different digits:\n";
    cin >> num2;
  }
//Determining which is smaller and larger:
  string result = (num1 < num2) ? "smaller" : "larger";
//Output it to the user.
  cout << "The first number (" << num1 << ")" << " is " << result << " than the second number. (" << num2 << ")";

  return 0;
}
 
