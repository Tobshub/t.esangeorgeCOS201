#include <iostream>

using namespace std;

int main() {
  cout << "This program prints the sum, difference and product of two numbers" << endl;

  int a, b; 
  cout << "Enter A: ";
  cin >> a;
  cout << "Enter B: ";
  cin >> b;

  int sum = a + b;
  int difference = a - b;
  int product = a * b;

  cout << "The sum of " << a << " and " << b << " is " << sum << endl;
  cout << "The difference of " << a << " and " << b << " is " << difference << endl;
  cout << "The product of " << a << " and " << b << " is " << product << endl;
  return 0;
}
