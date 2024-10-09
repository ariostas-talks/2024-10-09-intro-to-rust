#include <iostream>
#include <cstdlib>
#include <vector>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <positive integer>" << std::endl;
        return 1;
    }

    std::vector<unsigned long long> sequence;

    sequence.push_back(std::strtoull(argv[1], nullptr, 10));
    if (sequence[0] <= 0) {
        std::cerr << "Error: Please enter a positive integer." << std::endl;
        return 1;
    }

    unsigned long long *starting_number = &sequence[0];
    unsigned long long *latest_element = &sequence[0];
    unsigned long long steps_to_one = 0;

    // We get the next element following the Collatz procedure:
    // If it is an even number, we divide by 2
    // Otherwise, we find 3*x + 1

    while (*latest_element != 1) {
        if (*latest_element % 2 == 0) {
            sequence.push_back(*latest_element / 2);
        } else {
            sequence.push_back(3 * (*latest_element) + 1);
        }
        latest_element = &sequence[sequence.size() - 1];
        steps_to_one++;
    }

    std::cout << "Starting number: " << *starting_number << std::endl;
    std::cout << "Steps to get to 1:" << std::endl;
    for (int i = 0; i <= steps_to_one; i++) {
        std::cout << (i ? "-> ": "") << *(starting_number + i) << " ";
    }
    std::cout << std::endl;

    return 0;
}