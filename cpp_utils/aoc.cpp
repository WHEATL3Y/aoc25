#include "aoc.h"
#include <fstream>
#include <stdexcept>

std::ifstream aoc::read_file_to_stream(std::string filename) {
    std::ifstream input_stream(filename);
    if (!input_stream) {
        std::string err_message = "can't open file " + filename + "\n";
        throw std::runtime_error{err_message};
    }
    return input_stream;
}

std::string aoc::read_file_to_string(std::string filename) {
    std::string input_data;
    std::string line;
    std::ifstream input_stream = aoc::read_file_to_stream(filename);
    while(std::getline(input_stream, line)) {
        input_data += line + "\n";
    }
    return input_data;
}

std::vector<std::string> aoc::read_file_to_lines(std::string filename) {
    std::vector<std::string> input_data;
    std::string line;
    std::ifstream input_stream = aoc::read_file_to_stream(filename);
    while(std::getline(input_stream, line)) {
        input_data.push_back((line));
    }
    return input_data;
}

int aoc::mod(int a, int b) {
    return ((a % b) + b) % b;
}
