#include <iostream>

using namespace std;

int main() {
  cout << "This program calculates the total purchase amount with sales tax" << endl;

  int cost;
  cout << "Enter the total purchase amount: ";
  cin >> cost;

  double sales_tax = (6.f/100.f) * cost;
  cout << "The sales tax is $" << sales_tax << endl;
  cout << "The total cost is $" << cost + sales_tax << endl;
  return 0;
}
