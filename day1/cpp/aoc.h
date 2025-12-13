#ifndef _AOC_H
#define _AOC_H

#include <fstream>
#include <string>
#include <vector>

class aoc {
    private:
        static std::ifstream read_file_to_stream(std::string filename);
    public: 
        static std::string read_file_to_string(std::string filename);
        static std::vector<std::string> read_file_to_lines(std::string filename);
        static int mod(int a, int b);
};

#endif
