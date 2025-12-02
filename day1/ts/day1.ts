import { readFileSync } from "node:fs";

function main() {
    let data: string;
    try {
        data = readFileSync("../input.txt").toString();
    } catch (err) {
        throw Error(err instanceof Error ? err.message : "Unknown Error");
    }
    const instructions = data.trim().split("\n");
    let currentPos = 50;
    let answer1 = 0;
    let answer2 = 0;
    for (const instruction of instructions) {
        const direction = instruction.substring(0, 1);
        const distance = Number(instruction.substring(1));
        if (direction === "R") {
            currentPos += distance;
        }
        else {
            currentPos -= distance;
        }

        while (currentPos >= 100 || currentPos < 0) {
            answer2++;
            if (currentPos >= 100) {
                currentPos -= 100;
            }
            else if (currentPos < 0) {
                currentPos = 100 + currentPos;
            }
        }

        if (currentPos === 0) {
            answer1++;
        }
        console.log(direction, distance, currentPos);
    }
    console.log(answer1, answer2); 
}

main();
