#include <iostream>

using namespace std;

int main() {
  float f = 90;

  cout << "Choose conversion option (1-2):" << endl;
  cout << "1. Fahrenheit to Celcius" << endl;
  cout << "2. Celcius to Fahrenheit" << endl;

  int opt;
  cin >> opt;

  if (opt == 1) {
    float f;
    cout << "Enter fahrenheit: ";
    cin >> f;
    float c = (5.f / 9.f) * (f - 32.0);
    cout << "In celcius: " << c;
  } else if (opt == 2) {
    float c;
    cout << "Enter celcius: ";
    cin >> c;
    float f = (c * 9.f / 5.f) + 32.0;
    std::cout << "In fahrenheit: " << f;
  }
}
