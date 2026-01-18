import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
import java.lang.Math;

public class Day1 {
    public static void main(String[] args) {
        int answer1 = 0;
        int answer2 = 0;
        File input = new File("../input.txt");
        int current = 50;
        try (Scanner s = new Scanner(input)) {
            while (s.hasNextLine()) {
                String line = s.nextLine();
                String direction = line.substring(0, 1);
                int distance = Integer.parseInt(line.substring(1));
                if (direction.equals("L")) {
                    distance = -distance; 
                }
                answer2 += (distance < 0 ? -distance : distance) / 100;
                if ((current + distance % 100 <= 0
                        || current + distance % 100 > 99)
                        && current != 0) {
                   answer2++;             
                }
                current = Math.floorMod(current + distance, 100);
                if (current % 100 == 0) {
                    answer1++;
                }
            }
        }
        catch (FileNotFoundException e) {
            e.printStackTrace();
        }

        System.out.println(answer1);
        System.out.println(answer2);
    }
}
