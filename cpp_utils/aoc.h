#ifndef _AOC_H
#define _AOC_H

#include <fstream>
#include <string>
#include <vector>

using namespace std;

class aoc {
    private:
        static ifstream read_file_to_stream(string filename);
    public: 
        static string read_file_to_string(string filename);
        static vector<string> read_file_to_lines(string filename);
        static int mod(int a, int b);
        static vector<string> split(string input, char delimiter);
        static vector<string> split(string input, size_t length);
        static string vec_to_string(vector<string> input);
        static string vec_to_string(vector<string> input, string delimiter);
};

#endif
