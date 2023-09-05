#include <iostream>
#include <vector>

int main() {
    std::vector<double> temperatures;

    for (int day = 1; day <= 5; ++day) {
        double temperature;
        std::cout << "Digite a temperatura para o dia " << day << ": ";
        std::cin >> temperature;
        temperatures.push_back(temperature);
    }

    double sum = 0.0;
    for (double temp : temperatures) {
        sum += temp;
    }

    double average_temperature = sum / temperatures.size();
    std::cout << "Média das temperaturas: " << average_temperature << "°C" << std::endl;

    return 0;
}
