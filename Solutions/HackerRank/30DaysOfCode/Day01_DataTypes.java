import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        int i = 4;
        double d = 4.0;
        String s = "HackerRank ";
        
        Scanner scanner = new Scanner(System.in);
        
        int inputInteger = scanner.nextInt();
        double inputDouble = scanner.nextDouble();
        
        String inputString = scanner.next() + scanner.nextLine();
        
        System.out.printf("%d\n", i + inputInteger);
        System.out.printf("%.1f\n", d + inputDouble);
        System.out.printf("%s\n", s.concat(inputString));
        
        scanner.close();
    }
}
