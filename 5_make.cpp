#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
    srand(123); // Seed the random number generator for reproducibility

    // Flip a coin 500 times
    std::vector<string> coinFlips;
    string coinFlipResult = "";

    // Loop to perform 500 flips
    for (int i = 0; i < 500; ++i) {
        int flip = rand() % 2; // 0 or 1
        if (flip == 0) {
            coinFlipResult = "Heads";
        } else {
            coinFlipResult = "Tails";
        }
        coinFlips.push_back(coinFlipResult); // Add the result to the vector
    }

    // Count the number of heads
    int headsCount = 0;
    for (const auto& flip : coinFlips) {
        if (flip == "Heads") {
            ++headsCount;
        }
    }

    std::cout << "Number of Heads: " << headsCount << '\n';
    std::cout << "Number of Tails: " << coinFlips.size() - headsCount << '\n';

    return 0;
}
