#include <iostream>

int main()
{
    int sum = 0;
    for (int i = 1; i < 6; i++) {
        std::cout <<"現在i值是: "<< i << "\n";
        sum = sum + i;
    }
    std::cout << "1+..+5總和是: " << sum << "\n";
    return 0;
}