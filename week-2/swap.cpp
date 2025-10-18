#include <iostream>

using namespace std;

int main() {
  cout << "This program swaps the values of two variables" << endl;

  int a, b;
  cout << "Enter A: ";
  cin >> a;
  cout << "Enter B: ";
  cin >> b;

  int temp = a;
  a = b;
  b = temp;

  cout << "The swapped value of A is " << a << endl;
  cout << "The swapped value of B is " << b << endl;
  return 0;
}
