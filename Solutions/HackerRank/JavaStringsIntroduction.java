import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        String B=sc.next();
        
        System.out.println(sumLength(A, B));
        System.out.println(checkLexicographicOrder(A, B));
        System.out.println(getCapitalizedWords(A, B));
    }
    
    private static Integer sumLength(String A, String B) {
        return A.length() + B.length();
    }
    
    private static String checkLexicographicOrder(String A, String B) {
        if(A.compareTo(B) > 1) {
            return "Yes";
        }
        
        return "No";
    }
    
    private static String getCapitalizedWords(String A, String B) {
        String resultA = A.substring(0, 1).toUpperCase() + A.substring(1, A.length());
        String resultB = B.substring(0, 1).toUpperCase() + B.substring(1, B.length());
        
        return resultA + " " + resultB;
    }
}
