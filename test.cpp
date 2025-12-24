#include <iostream>
#include "cpp_utils/aoc.h"

using namespace std;

int main() {
    string test = "12121";
    string test1 = "121212";
    cout << aoc::vec_to_string(aoc::split(test, (size_t)2)) << endl;
    cout << aoc::vec_to_string(aoc::split(test1, (size_t)2)) << endl;
    return 0;
}
