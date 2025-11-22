#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "Enter integer: ";
  cin >> n;

  if (n % 5 == 0) {
    cout << "HiFive" << endl;
  } else if (n % 2 == 0) {
    cout << "HiEven" << endl;
  }
  return 0;
}
