#include <iostream>

int main( ){
    int sum = 0;
    int i = 1;
    while (i <= 5) {
        sum += i;
        i++;
    }

    std::cout << sum << std::endl;
}
