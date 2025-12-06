// C++ solution for Advent of Code Day 1
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

std::vector<std::string> read_input(const std::string& filename) {
    std::vector<std::string> lines; // vector to store input
    std::ifstream input_file(filename); // open the file

    if (!input_file.is_open()) {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return lines;
    }

    std::string line;
    while (std::getline(input_file, line)) {
        lines.push_back(line);
    }

    input_file.close();
    return lines;
}

int main() {
    std::vector<std::string> input_data = read_input("day1/input.txt");

    return 0;
}