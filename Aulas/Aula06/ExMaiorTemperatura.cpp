#include <iostream>

int main() {
    double temperatures[5];

    std::cout << "Digite as 5 temperaturas:" << std::endl;

    for (int i = 0; i < 5; ++i) {
        std::cout << "Temperatura " << i + 1 << ": ";
        std::cin >> temperatures[i];
    }

    double max_temperature = temperatures[0];

    for (int i = 1; i < 5; ++i) {
        if (temperatures[i] > max_temperature) {
            max_temperature = temperatures[i];
        }
    }

    std::cout << "A maior temperatura é: " << max_temperature << "°C" << std::endl;

    return 0;
}
