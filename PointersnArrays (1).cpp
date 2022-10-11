#include <iostream>
using namespace std; 

void printArray (int [], int);
void printReverse (int [], int);
double averageArray(int [], int);

int main () {
  
  int ar[] = { 10, 20, 30, 40, 50};
  int *pAr = ar;
  int *pTemp = & ar[1];
  cout << "array address:" << ar << endl;
  cout << "array address:" << pAr << endl;
  cout << "array address:" << pTemp << endl;
  
  printArray(ar, 4);
  printReverse (ar, 4);
  cout << "\n\n array average is: " << averageArray(ar, 4);
}

double averageArray (int a[], int n) {
 int sum = 0;
 for (int i = 0; i < n; i++) 
   sum += a[i];

   return sum/n;
}

void printArray (int b[], int n) {
  cout << "\n----------------------";
  for (int i = 0; i < n; i++) 
    cout << "\n" << b[i];
}

void printReverse (int b[], int n) {
  cout <<"\n -- Array Reverse --";
  for (int i = n-1; i >= 0; i--) {
      cout << "\n" << b[i];
  } 
}