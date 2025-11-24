import java.util.*;
import java.io.*;

class Calculator {
    
    int power(int base, int exponent) {
        if(base < 0 || exponent < 0) {
            throw new IllegalArgumentException("n and p should be non-negative");
        }
        
        int result = 1;
        
        for(int i = 1; i <= exponent; i++) {
            result *= base;
        }
        
        return result;
    }
}

class Solution{

    public static void main(String[] args) {
    
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-- > 0) {
        
            int n = in.nextInt();
            int p = in.nextInt();
            Calculator myCalculator = new Calculator();
            try {
                int ans = myCalculator.power(n, p);
                System.out.println(ans);
            }
            catch (Exception e) {
                System.out.println(e.getMessage());
            }
        }
        in.close();
    }
}
