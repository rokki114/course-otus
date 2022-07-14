#include <iostream>

int main() {
    int a;
    std::cin>>a;
    for (int s = 0; s < 5; s++) {
        std::cout << a << "\n";
        a= a + 1;
    };
};