#include <iostream>
#include "../../cpp_utils/aoc.h"

int main(int argc, char* argv[]) {
    std::string filename = argv[1];
    std::string input = aoc::read_file_to_string(filename);
    std::cout << input << std::endl;
    return 0;
}
