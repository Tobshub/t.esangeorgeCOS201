#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  srand(time(0));

  int number1 = rand();
  int number2 = rand();

  number1 = number1 + number2;
  number2 = number1 - number2;
  number1 = number1 - number2;

  if (number1 < number2) {
    int temp = number1;
    number1 = number2;
    number2 = temp;
  }

  int diff = (number1 - number2) % 10;

  cout << "What is number1 - number2? ";
  int input;
  cin >> input;

  if (input == diff) {
    cout << "Your guess is correct!";
  } else {
    cout <<  "Your guess is wrong!" << endl;
    cout << "The correct number was " << diff;
  }
  return 0;
}
