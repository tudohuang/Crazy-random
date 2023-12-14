#include <iostream>
#include <vector>
#include <random>

std::vector<int> randomNumberGenerator(int min, int max, unsigned seed, int count) {
    std::mt19937 rng(seed);
    std::uniform_int_distribution<std::mt19937::result_type> dist(min, max);

    std::vector<int> numbers;
    for (int i = 0; i < count; ++i) {
        numbers.push_back(dist(rng));
    }
    return numbers;
}

int main() {
    int min = 1;
    int max = 100;
    unsigned seed = 42;
    int count = 5;

    std::vector<int> randomNumbers = randomNumberGenerator(min, max, seed, count);
    for (int number : randomNumbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;

    return 0;
}
