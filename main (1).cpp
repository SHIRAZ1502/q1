
#include <iostream>

// Function to calculate the weighted average
double WeightedAverage(const double values[], const double weights[], int size) {
    double sum = 0.0;
    double weightSum = 0.0;

    for (int i = 0; i < size; i++) {
        sum += weights[i] * values[i];
        weightSum += weights[i];
    }

     return sum / weightSum;
}

int main() {
    const int size = 4;
    double values[size] = {5.0, 4.0, 3.0, 2.0};
    double weights[size] = {0.5, 0.4, 0.3, 0.2};

    double result = WeightedAverage(values, weights, size);

  std::cout << "The Weighted Average: " << result << std::endl;

    return 0;
{

