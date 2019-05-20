/* https://app.codesignal.com/arcade/intro/level-4/xYXfzQmnhBvEKJwXP */

import java.util.Arrays;

public class areSimilar {

    public static void main(String[] args) {
        
        int[] a = {832, 998, 148, 570, 533, 561, 894, 147, 455, 279};
        int[] b = {832, 570, 148, 998, 533, 561, 455, 147, 894, 279};
        
        System.out.println(areSimilar(a, b));
    }
    
    public static boolean areSimilar(int[] a, int[] b) {
        
        if((countDifferents(a, b)>2)) {
            
            return false;
        }       
        
        Arrays.sort(a);
        Arrays.sort(b);
         
        for(int i=0; i<a.length; i++) {
             
            if((a[i]!=b[i])) {
                 
                return false;
            }
        }
        
        return true;
    }
    
    public static int countDifferents(int[] a, int[] b) {
        
        int countDifferents=0;
        
        for(int i=0; i<a.length; i++) {
            
            if(a[i]!=b[i]) {
                
                ++countDifferents;
            }
        }
        
        return countDifferents;
    }
}
