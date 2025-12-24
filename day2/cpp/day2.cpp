#include <iostream>
#include "../../cpp_utils/aoc.h"

using namespace std;

int main(int argc, char* argv[]) {
    unsigned long answer1 = 0;
    string filename = argv[1];
    string input = aoc::read_file_to_string(filename);
    vector<string> id_ranges = aoc::split(input, ','); 
    for (unsigned i = 0; i < id_ranges.size(); ++i) {
        vector<string> range = aoc::split(id_ranges[i], '-');
        unsigned long start = stoul(range[0]);
        unsigned long end = stoul(range[1]);
        for (unsigned long j = start; j <= end; ++j) {
            string str = to_string(j);
            if (str.substr(0, str.length() / 2)
                == str.substr(str.length() / 2))
            {
                answer1 += j;
            }
            for (unsigned long k = 0; k <= str.length() / 2; ++k) {
                cout << aoc::split(str, (size_t)1)
        }
    }
    cout << answer1 << endl;
    return 0;
}
