#include <iostream>

using namespace std;

int main() {
  for (int i = 0; i < 6; i++) {
    string s;
    for (int j = 6; j > i; j--) {
      s += " ";
    }
    s += "*";
    for (int j = 0; j < i * 2; j++) {
      if (i == 3) {
        s += "*";
      } else {
        s += " ";
      }
    }
    s += "*";
  cout << s << endl;
  }
  return 0;
}
