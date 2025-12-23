#include "aoc.h"
#include <fstream>
#include <stdexcept>

using namespace std;

ifstream aoc::read_file_to_stream(string filename) {
    ifstream input_stream(filename);
    if (!input_stream) {
        string err_message = "can't open file " + filename + "\n";
        throw runtime_error{err_message};
    }
    return input_stream;
}

string aoc::read_file_to_string(string filename) {
    string input_data;
    string line;
    ifstream input_stream = aoc::read_file_to_stream(filename);
    while(getline(input_stream, line)) {
        input_data += line + "\n";
    }
    return input_data;
}

vector<string> aoc::read_file_to_lines(string filename) {
    vector<string> input_data;
    string line;
    ifstream input_stream = aoc::read_file_to_stream(filename);
    while(getline(input_stream, line)) {
        input_data.push_back((line));
    }
    return input_data;
}

int aoc::mod(int a, int b) {
    return ((a % b) + b) % b;
}

vector<string> aoc::split(string input, char delimiter) {
    vector<string> output = {};
    string buf = ""; 
    for (unsigned i = 0; i < input.length(); ++i) {
        char current = input[i];
        if (current != delimiter) {
            buf.push_back(current);
        }
        else {
            output.push_back(buf);
            buf.clear();
        }
    }
    output.push_back(buf);
    return output;
}
