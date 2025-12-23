#include <iostream>
#include "../../cpp_utils/aoc.h"

using namespace std;

int main(int argc, char* argv[]) {
    string filename = argv[1];
    string input = aoc::read_file_to_string(filename);
    vector<string> id_ranges = aoc::split(input, ','); 
    for (unsigned i = 0; i < id_ranges.size(); ++i) {
        cout << id_ranges[i] << endl;
    }
    cout << endl;
    return 0;
}
