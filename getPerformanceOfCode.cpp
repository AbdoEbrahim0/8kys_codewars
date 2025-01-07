#include <iostream>
#include <string>
#include <chrono>

std::string makeUpperCaseOptimized(const std::string& input_str) {
    std::string ret;
    ret.reserve(input_str.size());
    for (auto ch : input_str) {
        ret.push_back(std::toupper(ch));
    }
    return ret;
}

std::string makeUpperCaseWithoutReserve(const std::string& input_str) {
    std::string ret;
    for (auto ch : input_str) {
        ret.push_back(std::toupper(ch));
    }
    return ret;
}

int main() {
    std::string test(1000000, 'a'); // Create a large string of 1 million 'a's

    auto start = std::chrono::high_resolution_clock::now();
    makeUpperCaseOptimized(test);
    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "With reserve: " << std::chrono::duration<double>(end - start).count() << " seconds\n";

    start = std::chrono::high_resolution_clock::now();
    makeUpperCaseWithoutReserve(test);
    end = std::chrono::high_resolution_clock::now();
    std::cout << "Without reserve: " << std::chrono::duration<double>(end - start).count() << " seconds\n";

    return 0;
}
