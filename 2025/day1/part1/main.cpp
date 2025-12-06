// C++ solution for Advent of Code Day 1
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

std::vector<std::string> readInput(const std::string& filename) {
    std::vector<std::string> lines; // vector to store input
    std::ifstream inputFile(filename); // open the file

    if (!inputFile.is_open()) {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return lines;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        lines.push_back(line);
    }

    inputFile.close();
    return lines;
}

int main() {
    std::vector<std::string> inputData = readInput("day1/part1/input.txt");
    
    int res = 0; 
    int curr = 50;

    for (size_t i = 0; i < inputData.size(); ++i) {
        char direction = inputData[i][0];
        int magnitude = std::stoi(inputData[i].substr(1));
        const int RANGE_SIZE = 100;

        if (direction == 'L') {
            curr -= magnitude % RANGE_SIZE + RANGE_SIZE;
            curr %= RANGE_SIZE;
        } else {
            curr += magnitude;
            curr %= RANGE_SIZE;
        }

        if (curr == 0) {
            res += 1;
        }
    }

    std::cout << "Result: " << res << std::endl;

    return 0;
}