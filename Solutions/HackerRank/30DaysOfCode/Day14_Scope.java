import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;


class Difference {
  	private int[] elements;
  	public int maximumDifference;
    
    Difference(int[] elements) {
        this.elements = elements;
    }

	void computeDifference() {
        int minValue = Integer.MAX_VALUE;
        int maxValue = Integer.MIN_VALUE;
        
        for(int i = 0; i < this.elements.length; i++) {
            int currentValue = this.elements[i];
            
            if(currentValue < minValue) minValue = currentValue;
            if(currentValue > maxValue) maxValue = currentValue;
        }
        
        this.maximumDifference = maxValue - minValue;
    }

} // End of Difference class

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        sc.close();

        Difference difference = new Difference(a);

        difference.computeDifference();

        System.out.print(difference.maximumDifference);
    }
}
