#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << " Multiplication Table\n";
    cout << "----------------------\n";
    cout << " |";

    for (int i = 1; i <=9; i++) {
        cout << setw(3) << i;
    }

    cout << endl;
}
