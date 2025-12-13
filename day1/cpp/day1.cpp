#include "aoc.h"
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    std::string file_name = std::string(argv[1]);
    std::vector<std::string> input_lines = aoc::read_file_to_lines(file_name);
    int answer1 = 0;
    int answer2 = 0;
    int pos = 50;
    for (int i = 0; i < input_lines.size(); i++) {
        std::string direction = input_lines[i].substr(0, 1);
        int distance = std::stoi(input_lines[i].substr(1));
        distance = direction == "L" ? -distance : distance;
        int mod_distance = distance % 100;

        answer2 += (distance < 0 ? -distance : distance) / 100;
        if ((pos + mod_distance <= 0 || pos + mod_distance > 99) && pos != 0) {
            answer2++;
        }

        pos = aoc::mod(pos + distance, 100);
        if (pos == 0) {
            answer1++;
        }
    }
    std::cout << answer1 << std::endl;
    std::cout << answer2 << std::endl;
}
